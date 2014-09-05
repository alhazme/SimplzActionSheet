#Simplz Action Sheet
--------------------
Customizable iOS 7 style UIActionSheet replacement. Compatible with iOS 7.

##Features
By default, SimplzActionSheet like the iOS 7 UIActionSheet.

##Usage
.h

```
@property (strong, nonatomic) SimplzActionSheet *simplzActionSheet;
```
.m
```
self.simplzActionSheet = [[SimplzActionSheet alloc] initWithTitle:@"Choose Picture" delegate:self cancelButtonTitle:@"Cancel" destructiveButtonTitle:@"Delete" otherButtonTitlesArray:@[@"Gallery", @"Photo"]];
[self.simplzActionSheet showInView:self.view];
```

##A custom simplz actionsheet with image example is shown here:
![Colored](https://raw.github.com/aizcheryz/SimplzActionSheet/master/Screenshot/Screenshot.png)
##Usage
.h

```
@property (strong, nonatomic) SimplzActionSheet *simplzActionSheet;
```
.m
```
self.simplzActionSheet = [[SimplzActionSheet alloc] initWithTitle:@"Choose Picture" delegate:self cancelButtonTitle:@"Cancel" destructiveButtonTitle:nil buttonTextColor:[UIColor colorWithRed:0.09 green:0.702 blue:0.667 alpha:1] otherButtonTitlesArray:@[@"Gallery", @"Photo"] otherImagesTitlesArray:@[@"icon-browse-gallery",@"icon-take-picture"] buttonTextAlign:@"Left"];
[self.simplzActionSheet showInView:self.view];
```
##Event handling button click:
```
-(void)actionSheet:(SimplzActionSheet *)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    // add logic here
    NSLog(@"%i", buttonIndex);
}
```
