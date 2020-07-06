/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/** \file
 * \ingroup RNA
 */

#include <stdlib.h>

#include "RNA_define.h"
#include "RNA_enum_types.h"

#include "DNA_asset_types.h"

#include "rna_internal.h"

#ifdef RNA_RUNTIME

#else

static void rna_def_asset(BlenderRNA *brna)
{
  StructRNA *srna;

  srna = RNA_def_struct(brna, "Asset", "ID");
  RNA_def_struct_ui_text(srna, "Asset", "Asset data-block");
//  RNA_def_struct_ui_icon(srna, ICON_ASSET); /* TODO: Icon doesn't exist!. */

}

void RNA_def_asset(BlenderRNA *brna)
{
  rna_def_asset(brna);
}

#endif
