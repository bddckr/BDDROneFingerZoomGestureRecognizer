# BDDROneFingerZoomGestureRecognizer
[![The MIT License (MIT)](https://go-shields.herokuapp.com/license-MIT-blue.png)][MIT]
[![Platform](https://cocoapod-badges.herokuapp.com/p/BDDROneFingerZoomGestureRecognizer/badge.png)][CocoaDocs]
[![Version](https://cocoapod-badges.herokuapp.com/v/BDDROneFingerZoomGestureRecognizer/badge.png)][CocoaDocs]

## Description

`UIGestureRecognizer` subclass to enable one-finger-zoom gestures.

This concrete subclass of `UIGestureRecognizer` enables one-finger-zooming ([like in the Google Maps iOS app](http://littlebigdetails.com/post/51559128905/)). It has support for elastic bouncing, like `UIScrollView` does:

<img src="https://github.com/bddckr/BDDROneFingerZoomGestureRecognizer/raw/master/Example.gif" alt="Example" style="height: 400px;"/>

If you're going to use this with `UIScrollView` or want to see it in action make sure to check out [BDDRScrollViewAdditions](https://github.com/bddckr/BDDRScrollViewAdditions).

## Installation

Simply add the files in the `BDDROneFingerZoomGestureRecognizer.h` and `BDDROneFingerZoomGestureRecognizer.m` to your project or add `BDDROneFingerZoomGestureRecognizer` to your Podfile if you're using CocoaPods.

## Documentation

Everything is documented in the [header file][header]. A rendered version is available on [CocoaDocs].

## Customization

There are several properties that change the default behavior, especially interesting are `numberOfTapsRequired`, `minimumPressDuration` and `allowableMovement`. For more info see the [header].

## Contact

Follow [@bddckr](https://twitter.com/bddckr) on Twitter.

## Copyright and License

Copyright (c) 2013 Christopher - Marcel Böddecker  
Licensed under [The MIT License (MIT)][MIT].

[MIT]: http://choosealicense.com/licenses/mit
[CocoaDocs]: http://cocoadocs.org/docsets/BDDROneFingerZoomGestureRecognizer
[header]: https://github.com/bddckr/BDDROneFingerZoomGestureRecognizer/blob/master/BDDROneFingerZoomGestureRecognizer/BDDROneFingerZoomGestureRecognizer.h
