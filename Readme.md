# yt_link


### Description
yt_link is a video grabber that grabs a list of vids from the first page of youtube for *keyword_search*.
it also comes with a crappily coded util I call chop which simply chops a line off the file and prints it back to stdout yt_link **NEEDS** chop in order to pass the vid to mpv. yt_link is also fairly crappy in and of itself so there may be bugs with certain queries but not others I'll patch them as I come across them.

#### Usage
yt_link is fairly straight forward to use I often use it in the following manner
```bash
mpv $(./yt_link "keyword" [VID_TO_USE])
```
Its Important to note that **VID_TO_USE is a line number that starts at 0 like** arrays do and that its only *practical* use at the moment is to go to the next video.
The **keyword** argument **REQUIRES quotes for anything other than a single word** this is because youtube uses the ```+``` in place of ' ' in its search queries.
As said above **VID_TO_USE** is a line number yt_link generates a list of vids by curling youtube with the **keyword** argument each line number is one of those vids.

Example
```bash
mpv $(./yt_link "spongebob my leg" 0) #pull the absolute first video from search of "spongebob my leg"
```

Example 2
```bash
mpv $(./yt_link "Danger Zone" 1) #pull 2nd vid from search
```
