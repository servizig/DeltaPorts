--- /dev/null	2015-12-21 17:33:42.530292415 +0200
+++ ide/packages/ideconfig/include/dragonfly/lazconf.inc
@@ -0,0 +1,37 @@
+// included by lazconf.pp
+
+{***************************************************************************
+                               lazconf.inc
+
+  dragonfly specific include file for the IDE
+
+ ***************************************************************************
+
+ ***************************************************************************
+ *                                                                         *
+ *   This source is free software; you can redistribute it and/or modify   *
+ *   it under the terms of the GNU General Public License as published by  *
+ *   the Free Software Foundation; either version 2 of the License, or     *
+ *   (at your option) any later version.                                   *
+ *                                                                         *
+ *   This code is distributed in the hope that it will be useful, but      *
+ *   WITHOUT ANY WARRANTY; without even the implied warranty of            *
+ *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
+ *   General Public License for more details.                              *
+ *                                                                         *
+ *   A copy of the GNU General Public License is available on the World    *
+ *   Wide Web at <http://www.gnu.org/copyleft/gpl.html>. You can also      *
+ *   obtain it by writing to the Free Software Foundation,                 *
+ *   Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.        *
+ *                                                                         *
+ ***************************************************************************
+}
+
+{For DragonFly specific implementations.
+ General unix implementations are in ../unix/lazbaseconf.inc}
+uses
+  BaseUnix, Unix;
+
+{$I ../unix/lazbaseconf.inc}
+
+
