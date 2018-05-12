# Copyright (C) 2018  Steffen Ronalter
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main() {
  while(1) {
    char* input = readline("> ");
    if (!input)
      break;
    if (*input)
      add_history(input);
    printf("%s\n", input);
    free(input);
  }
  return 0;
}
