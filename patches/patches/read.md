Highlight:
https://tools.suckless.org/dmenu/patches/highlight/
Highlight updated slightly, written letter was shifting towards left.

Removed -1 from second argument.
```c
				drw_text(
					drw,
					x + indentx - (lrpad / 2) - 1,
					y,
					MIN(maxw - indentx, TEXTW(highlight) - lrpad),
					bh, 0, highlight, 0
				);
```


Reject No Match:
https://tools.suckless.org/dmenu/patches/reject-no-match/
