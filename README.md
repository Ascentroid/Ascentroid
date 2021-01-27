# Ascentroid Map Kit

Current Build Status: <b>Prototype / Experimental</b>

The Ascentroid Map Kit is an Unreal Engine 4 ("UE4") plugin you install into the UE4 editor to assist with the creation of campaigns and levels for Ascentroid.

The map kit, essentially, builds a <b>\*.pak</b> file, which treats your campaign/content like a game <b>MOD</b> for Ascentroid.

What's great about this is that it allows map creators to utilize <b><i>almost all of the full features/capabilities of UE4</i></b>!

### Prerequisites

1) Only <b>Windows</b>, <b>x64</b> is supported right now. Make sure you meet the other required Hardware and Software Specifications for Unreal Engine: https://docs.unrealengine.com/en-US/Basics/RecommendedSpecifications/index.html

2) Install Visual Studio 2019 or 2017 (Community Edition is free). This is necessary because Unreal Engine <b>requires Microsoft's C++ compiler</b>: https://visualstudio.microsoft.com/downloads/

* Note: It may be possible to use [Visual Studio Code](https://code.visualstudio.com/download) in conjunction with the [Visual Studio Build Tools](https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019), but I am not familiar with this setup. If you are able to figure out how to install UE4 with this configuration, feel free to [send me](mailto:ascentroid@gmail.com) the instructions and I will update this documentation.

3) Install Unreal Engine <b><u>4.24.3</u></b> by following the official installation guide. When prompted, select the <b>Publishing License</b>: https://docs.unrealengine.com/en-US/Basics/InstallingUnrealEngine/index.html

4) If not already installed, install the [.NET Framework 4.7.2 Runtime](https://dotnet.microsoft.com/download/dotnet-framework/thank-you/net472-web-installer). This is <b>required</b> for the [Ascentroid Map Kit Setup Utility](https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip).

### Setup

Install Ascentroid (the game). The latest test builds are posted in the [Ascentroid Discord](https://discord.gg/pktfw78) in the <b>#downloads</b> channel.

Create a new, blank <b>C++</b> UE4 project for your campaign <b>without Starter Content</b>:

![Imgur](https://i.imgur.com/5Msq0OW.png)

![Imgur](https://i.imgur.com/IxDBZi9.png)

![Imgur](https://i.imgur.com/2eAJmm4.png)

Open your UE4 campaign project if it doesn't automatically open after you create it.

Once open, click the <b>Show Sources</b> icon in the <b>Content Browser</b>:

![Imgur](https://i.imgur.com/a3xkG7J.png)

In the lower, right-hand corner of the <b>Content Browser</b>, click the <b>View Options</b> and make sure <b>Show C++ Classes</b> and <b>Show Plugin Content</b> options are selected/checked.

![Imgur](https://i.imgur.com/j7PETD7.png)

Now, close the UE4 campaign project.

Download the [Ascentroid Map Kit Setup Utility](https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip) (requires [.NET Framework 4.7.2 Runtime](https://dotnet.microsoft.com/download/dotnet-framework/thank-you/net472-web-installer)):

https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip

Unzip anywhere and execute <b>AscMapKitSetup.exe</b>:

![Imgur](https://i.imgur.com/6iVNY0e.png)

![Imgur](https://i.imgur.com/TAqg8EV.png)

Follow the steps and provide the folder/file locations as requested in the utility. When ready, click the <b>Initialize Now!</b> button.

![Imgur](https://i.imgur.com/rNKmKjK.png)

The utility will perform the following in the background:

1) Downloads the UE4 map kit source files and extracts them to the appropriate campaign project folders.

2) It will install a <b>AscMapKit</b> plugin into your UE4 campaign project. These files contain map kit content and C++ actors you can use in your levels (grates, fans, signs, doors, enemies, powerups, and more).

3) It will install a <b>Campaign</b> plugin in your UE4 campaign project. This plugin is <b>required</b> in order to <b>cook</b> a <b>*.pak</b> file, which will contain all of your campaign content to be used by the Ascentroid game runtime.

4) It will place an <b>Empty.umap</b> level file into your UE4 campaign project <b>Content</b> folder. This empty level, and file name, is <b>required</b> in order for the <b>cook</b> process to work. <i>I don't know why... it's some kind of wonky UE4 thing.</i>

5) It will create a <b>_BatchScripts</b> folder at the root of your UE4 campaign project. It will contain a few batch files you will need to use later.

6) It will create a <b>*.json</b> file at the root of your UE4 campaign project. This file contains important, and required, meta data used by the Ascentroid game runtime.

When the map kit setup is complete, it should pop-up a series of steps to help guide you through the final setup:

![Imgur](https://i.imgur.com/X3bUgHq.png)

1) Execute:
```
[campaign project root]\_BatchScripts\GenerateProject.bat
```

2) Execute:
```
[campaign project root]\_BatchScripts\Compile.bat
```

3) Open your UE4 campaign project.

4) If UE4 prompts to update the project, click <b>Update</b>:

![Imgur](https://i.imgur.com/c6JXMUB.png)

5) If UE4 prompts about new plugins being available, click <b>Dismiss</b>:

![Imgur](https://i.imgur.com/NFjatG5.png)

6) <b>[Skip if you've already done this]</b>:<br/>
In the UE4 editor <b>Content Browser</b>, click <b>View Options</b> and turn on <b>Show Plugin Content</b>.

7) Create at least one level in your UE4 project and save it to the <b>Campaign Content</b> folder.

8) Edit campaign <b>*.json</b> (make sure your campaign and level name(s) match):
```
[campaign project root]\[campaign project name].json
```

9) All assets used in your campaign <b>must</b> be saved in the <b>Campaign Content</b> folder (or they won't cook!).

10) To cook your campaign, execute:
```
[campaign project root]\_BatchScripts\Cook.bat
```

11) The <b>\*.json</b> and <b>\*.pak</b> files for your campaign will be copied to the Ascentroid game folder:
```
[game root]\Ascentroid\Content\Ascentroid\Paks
```

12) If everything worked, you can now test your campaign in the game, Ascentroid!

13) Visit Github for more documentation: https://github.com/Ascentroid/Ascentroid

14) Visit YouTube for tutorials: http://youtube.ascentroid.com

## Important Notes

1) All content must be placed in the <b>Campaign Content</b> folder, or it will not get cooked into your <b>\*.pak</b> file!

2) Everything you see in this map kit and documentation is subject to change as development progresses. If you have a question or comment, [let me know](mailto:ascentroid@gmail.com).

3) Ascentroid uses a large scale in order to fix problems with collision. A cube scale of 20m x 20m x 20m is the general standard.

4) Read the [FAQ](#faq).

## How do I build stuff?

#### You may want to learn some basics about Unreal Engine:

* https://docs.unrealengine.com/en-US/index.html
* https://docs.unrealengine.com/en-US/WorkingWithContent/index.html
* https://docs.unrealengine.com/en-US/WorkingWithContent/Importing/FBX/StaticMeshes/index.html
* https://docs.unrealengine.com/en-US/WorkingWithContent/Importing/HowTo/index.html
* https://docs.unrealengine.com/en-US/Resources/ContentExamples/Lighting/index.html
* https://docs.unrealengine.com/en-US/Resources/ContentExamples/MaterialNodes/index.html
* https://docs.unrealengine.com/en-US/RenderingAndGraphics/index.html
* Import 3D meshes: https://www.youtube.com/watch?v=_FgedJWInL0
* Lighting basics: https://www.youtube.com/watch?v=FsjqVIyr0O4
* Hierarchical Instanced Static Meshes: https://www.youtube.com/watch?v=GmFYPotzLhc

#### If you don't want to learn 3D modeling tools, you can try some Marketplace assets:

##### <a name="supergrid"></a> [SuperGrid](https://www.unrealengine.com/marketplace/en-US/product/supergrid-starter-pack) - <i>highly recommended</i>!

![SuperGrid](https://cdn1.epicgames.com/ue/item/SuperGrid_Screenshot_02-1920x1080-a7795c4363fe32b96e0e4cdc22262f71.png?resize=1&w=1600)

If you want to make maps quickly without having to learn a 3D modeling program, I highly recommend [SuperGrid](https://www.unrealengine.com/marketplace/en-US/product/supergrid-starter-pack) (which is free!).

Download it from the UE4 Marketplace here: https://www.unrealengine.com/marketplace/en-US/product/supergrid-starter-pack

SuperGrid has a series of preview videos here: https://www.youtube.com/playlist?list=PLx7zxUeK-7HiAsH4DyaklZW0NAIyKGc2N

Here is another small demo video:
https://www.youtube.com/watch?v=NxUq_rD8PVM

Tip: you can use SuperGrid <b><i>in addition to</i></b> a 3D modeling tool if you wish! It can be very handy to use both in your campaign(s)!

To get SuperGrid setup in your campaign project, do the following:

1) From the Marketplace, click <b>Create Project</b>:

![Imgur](https://i.imgur.com/WgLnsJ8.png)

2) Use the default project locations and click <b>Create</b>. We will be manually copying the content out of this project and into your campaign project next:

![Imgur](https://i.imgur.com/lbXh1Dw.png)

3) Copy the content folder for the default SuperGrid project to the content folder for your campaign project:

From:
```
[SuperGrid project root]\Content\SuperGrid
```

To:
```
[campaign project root]\Content\SuperGrid
```

For example, from:

![Imgur](https://i.imgur.com/d6072TT.png)

To:

![Imgur](https://i.imgur.com/qy563ms.png)

4) Now, open your UE4 campaign project.

5) If it worked, you should now see the <b>SuperGrid</b> folder in the <b>Content Browser</b> under the root <b>Content</b> folder:

![Imgur](https://i.imgur.com/T2WVpfH.png)

Note: You <b>cannot</b> start using SuperGrid yet! The next steps are <b>critical</b>! Remember: all content must be placed in the <b>Campaign Content</b> folder, or it will not get cooked into your <b>\*.pak</b> file! See <b>[Other Marketplace Content](#other-marketplace-content)</b> for details on why these next steps are absolutely necessary.

6) Drag and drop the SuperGrid folder from the <b>Content</b> folder to the <b>Campaign Content</b> folder (optionally, if you want to place SuperGrid into sub-folder(s) under <b>Campaign Content</b>, create them and move the assets there):

![Imgur](https://i.imgur.com/TPeCXMs.png)

7) When prompted, select <b>Move Here</b>:

![Imgur](https://i.imgur.com/9LNKNwE.png)

8) The UE4 editor will begin migrating assets to your <b>Campaign Content</b> folder:

![Imgur](https://i.imgur.com/JvoW17Z.png)

9) You should now be able to start using SuperGrid in your level(s). Just be sure you use everything that is in the <b>Campaign Content</b> folder!

![Imgur](https://i.imgur.com/KggNFL7.png)

Tip: if you would like to save on some disk space, I recommend that you delete unused asset files when using Marketplace content. For example, for SuperGrid, I would delete everything in the <b>TutorialLevel</b> folder, the <b>Blueprints</b> folder, and the <b>Overview</b> file(s).

Tip: after everything has been moved; if there is a set of empty SuperGrid folders still visible in the <b>Content</b> folder, just delete them from the file system / using file explorer.

To reiterate: see <b>[Other Marketplace Content](#other-marketplace-content)</b> for details on why these next steps are absolutely necessary.

##### <a name="mesh-tool"></a>[Mesh Tool](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor) - <i>highly recommended</i>!

[Mesh Tool](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor) is a commercial (paid) UE4 plugin which allows you to edit mesh assets and prototype props and levels without leaving the UE4 Editor. It also includes basic UV mapping tools!

![MeshTool](https://forums.unrealengine.com/filedata/fetch?id=1221390&d=1508023041)

![MeshTool](https://forums.unrealengine.com/filedata/fetch?id=1221391&d=1508023040)

![MeshTool](https://forums.unrealengine.com/filedata/fetch?id=1221394&d=1508023040)

![Meshtool](https://forums.unrealengine.com/filedata/fetch?id=1221396&d=1508023040)

![Meshtool](https://forums.unrealengine.com/filedata/fetch?id=1221398&d=1508158807)

Mesh Tool links:

* [Unreal Engine Forums](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor)
* [Get Mesh Tool on the Marketplace](https://www.unrealengine.com/marketplace/mesh-tool)
* [Get Mesh Tool on itch.io](https://marynate.itch.io/mesh-tool)
* [YouTube Tutorials](https://www.youtube.com/playlist?list=PLAKCoctl4aHxyY9fZbQIpdtEdzlj09GSn)
* [User Guide](https://docs.google.com/document/d/1yCEFGz4LEWdhZEw3bk_tCPI3Gg6D-29_AhtkeWJqm1g/pub)
* [Issue Tracker](https://github.com/marynate/mesh-tool/issues)

Tip: Keep an eye out for asset sales. Sometimes you can get a helpful tool for less, or even sometimes <i>free</i>, during a sale.

##### <a name="mesh-tool"></a>[Instance Tool](https://www.unrealengine.com/marketplace/en-US/product/instance-tool) - <i>highly recommended</i>!

[Instance Tool](https://www.unrealengine.com/marketplace/en-US/product/instance-tool) is a commercial (paid) UE4 plugin which allows you to quickly select/edit/convert Instanced Static Meshes in editor viewports. This is a good tool to have for [performance/optimization](#performance-optimization).

![Imgur](https://cdn1.epicgames.com/ue/item/InstanceTool_screenshot_7-1920x1080-ce11e1497e8f0529bc734ab6f46b2d18.jpg?resize=1&w=1600)

* [Get Instance Tool on the Marketplace](https://www.unrealengine.com/marketplace/en-US/product/instance-tool)

##### <a name="other-marketplace-content"></a>Other Marketplace Content

You can try using more [Marketplace](https://www.unrealengine.com/marketplace) assets from the UE4 Marketplace here: https://www.unrealengine.com/marketplace

When using assets from the UE4 Marketplace, be sure to follow these guidelines:

* If the asset requires the creation of a UE4 project, always create the default project somewhere temporary, first, and then manually copy the assets to the <b>Content</b> folder of your UE4 project.

* If the asset is able to install directly into your UE4 campaign project, the asset should always get installed to the <b>Content</b> folder of your UE4 project, first (this is typically the default anyway).

* The reason assets need to go in the <b>Content</b> folder first is because UE4 uses an internal <b>reference path</b> system to associate dependencies between assets.

* For example, let's say you have an asset pack called <b>SomeMarketplaceAssetPack</b> with a material and a texture inside of it:

```
/Content/SomeMarketplaceAssetPack/Materials/M_SomeMaterial
/Content/SomeMarketplaceAssetPack/Textures/T_SomeTexture
```

* If the material asset <b>M_SomeMaterial</b> is utilizing/referencing the texture <b>T_SomeTexture</b> inside of it, then the material will be pointing to the <b>absolute path</b> of the texture asset, like this:

```
/Content/SomeMarketplaceAssetPack/Textures/T_SomeTexture
```

* If you made the mistake of only copying/moving <b>M_SomeMaterial</b> to your <b>Campaign Content</b> folder, but not <b>T_SomeTexture</b>, then <b>M_SomeMaterial</b> would still be referencing the wrong <b>absolute path</b> (above). This means the asset <b><i>will not be cooked</i></b>!

* To make sure the paths are migrated to the <b>Campaign Content</b> folder properly, you can follow a few steps and the UE4 editor <b><i>will automatically fix/resolve most of the dependencies for the absolute paths for you</i></b>!

* Drag and drop the marketplace asset folder from the <b>Content</b> folder to the <b>Campaign Content</b> folder (optionally, if you want to place marketplace asset into sub-folder(s) under <b>Campaign Content</b>, create them and move the assets there):

![Imgur](https://i.imgur.com/TPeCXMs.png)

* When prompted, select <b>Move Here</b>:

![Imgur](https://i.imgur.com/9LNKNwE.png)

* The UE4 editor will begin migrating assets to your <b>Campaign Content</b> folder. It's at this point the editor <b><i>will automatically fix/resolve all of the dependencies for the absolute paths for you</i></b>.

![Imgur](https://i.imgur.com/JvoW17Z.png)

* You can try this out by following the installation instructions for [SuperGrid](#supergrid).

Note: this may or may not have adverse affects on different types of assets contained within the marketplace content (for example: Blueprint dependencies). It has not been fully tested and results may vary, depending on how complicated the marketplace asset(s) you are working with are. You <i>may</i> have to perform additional manual work to make certain things compatible when moving things over to the <b>Campaign Content</b> folder. It's up to you to decide how advanced you want to make things.

Tip: remember, if you would like to save disk space for your UE4 campaign project, analyze all marketplace assets and delete assets which are unnecessary.

#### <a name="3d-tools"></a>Use 3D tools:

* [Blender](https://www.blender.org/) (free)
* [MagicaVoxel](http://ephtracy.github.io/) (free)
* [Silo 3D](https://nevercenter.com/silo/) (paid)
* [Maya](https://makeanything.autodesk.com/maya-indie-usa) (paid)
* [3D Studio Max](https://makeanything.autodesk.com/3dsmax-indie-usa) (paid)
* [Modo](https://www.foundry.com/products/modo) (paid)
* [Lightwave](https://www.lightwave3d.com/buy-lightwave/) (paid)
* [Rhino 3D](https://www.rhino3d.com/) (paid)
* [Sketchup](https://www.sketchup.com/plans-and-pricing/sketchup-free) (free)
* [Substance Designer](https://www.substance3d.com/products/substance-designer/) (paid)
* [Houdini](https://www.sidefx.com/products/houdini/houdini-indie/) (paid)
* Want more tools listed here? [Contact me](mailto:ascentroid@gmail.com)

#### Import levels from other games

Descent 1 and 2:

* Setup a [Windows 98](https://winworldpc.com/product/windows-98/98-second-edition) virtual machine (consider using [VirtualBox](https://www.virtualbox.org/), which is free).

* [Download](https://drive.google.com/file/d/1E4M43I8zox58ODjqulhXaBSMnyYJu2z5/view?usp=sharing) and setup [LVLVIEW32](https://drive.google.com/file/d/1E4M43I8zox58ODjqulhXaBSMnyYJu2z5/view?usp=sharing) on your Windows 98 virtual machine (instructions/details are not included here; you will have to sort that out yourself since the process can be subjective depending on how you setup your environment).

* In [LVLVIEW32](https://drive.google.com/file/d/1E4M43I8zox58ODjqulhXaBSMnyYJu2z5/view?usp=sharing), export your level to a DXF file.

* Convert the DXF file to a FBX file. You can use a [3D tool](#3d-tools), or try a free 3D file converter like this one: https://products.aspose.app/3d/conversion/dxf-to-fbx

* Some of the 3D mesh normals may be flipped. You can use a [3D tool](#3d-tools), or [Mesh Tool](#mesh-tool), to fix your normals.

* You will probably need to scale your level to match Ascentroid's scale. A cube at Ascentroid scale is 20m x 20m x 20m. You can use a [3D tool](#3d-tools), or [Mesh Tool](#mesh-tool) to re-scale your level 3D mesh.

* Texture your level 3D mesh by setting up UV mapping. You can use a [3D tool](#3d-tools), or [Mesh Tool](#mesh-tool).

* Import your level 3D mesh into your UE4 campaign project. Remember: all assets used in your campaign <b>must</b> be saved in the <b>Campaign Content</b> folder (or they won't cook!).

* <b>Optional, subjective</b>: When you import your level 3D mesh into the UE4 editor, you will probably want to disable collision generation. After it has been imported, edit the level 3D mesh and enable per-poly collision by setting <i>Collision Complexity</i> to <b>Use Complex Collision as Simple</b>:

![Imgur](https://i.imgur.com/PbdjoPb.png)

* Add lighting (see: [UE4 Lighting documentation](https://docs.unrealengine.com/en-US/Resources/ContentExamples/Lighting/index.html))

* Keep in mind any additional work you may need to consider for [performance/optimization](#performance-optimization).

* Add Ascentroid map kit actors (see: [Ascentroid Map Kit Usage](#map-kit-usage))

* You should be able to cook your UE4 campaign project and play your level in Ascentroid!

#### <a name="map-kit-usage"></a>Ascentroid Map Kit Usage

<b>Overview</b>

The Ascentroid map kit contains pre-fab assets and actors you can use in your UE4 campaign project level(s).

<b>Pre-fab Content</b>

* Placeable pre-fab content can be found in the <b>AscMapKit Content</b> folder. Feel free to explore this content to use in your project:

![Imgur](https://i.imgur.com/Mz1Ytms.png)

* You can drag and drop static meshes into your level(s). You can also use some of the materials, particles, textures and other assets that are available as part of pre-fab content.

* For example, I swapped out the color of the sign text using a pre-fab material instance here:

![Imgur](https://i.imgur.com/7Fo6s1Z.png)

* Another example, a pre-fab particle is included you could use as a power station effect:

![Imgur](https://i.imgur.com/UDe8Vsg.png)

* If you instead wanted to use your own material(s), create them in the <b>Campaign Content</b> folder, and then use it on a pre-fab. It should work. All content in the <b>AscMapKit Content</b> folder is shared with the game runtime. You should even be able to, for example, create material instances that reference base materials inside the <b>AscMapKit Content</b> folder. However, if this doesn't work, [please let me know](mailto:ascentroid@gmail.com) right away.

* I'll be adding more pre-fab asset content to the map kit as it is developed. Eventually, I foresee the community developing and submitting new assets for the map kit as well! Perhaps, in the future, we could even build a completely separate, community asset pack system!

<b>Actors</b>

* Placeable game actors can be found in the <b>AscMapKit C++ Classes</b> folder:

![Imgur](https://i.imgur.com/RITFPYX.png)

<b><i>Player Start Positions</i></b>

* Just drag and drop an <b>AscMapKitPlayerStart</b> from the <b>Player</b> folder. The 3D mesh and white arrow will show which direction the player will be oriented when spawning. You will want to add <b>eight (8)</b> player start positions to your level(s):

![Imgur](https://i.imgur.com/yeQaWEl.png)

<b><i>Powerups</i></b>

* Just drag and drop an <b>AscMapKitPowerupActor</b> from the <b>Powerup</b> folder, and select a <b>Powerup Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/4cDPDmm.png)

Tip: copy and paste powerup actors to quickly fill your level(s) with powerup spawn points!

<b><i>Doors</i></b>

* Just drag and drop an <b>AscMapKitDoorActor</b> from the <b>Door</b> folder, and select a <b>Door Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/FTtD71H.png)

Tip: there are tons of actor properties you can tweak! Hover your mouse over the property in the editor. They should all be fully documented!

![Imgur](https://i.imgur.com/ltWQUNf.png)

Note: Doors cannot be scaled yet. This may be coming in the future.

<b><i>Environment Areas</i></b>

* Just drag and drop an <b>AscMapKitEnvironmentAreaActor</b> from the <b>Area</b> folder, and select an <b>Environment Area Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/R6DeTK6.png)

Tip: power stations are considered environment areas. Just select <b>Power Station without Effects</b> or <b>Power Station with Effects</b> from the <b>Environment Area Type</b> property.

Tip: there are tons of actor properties you can tweak! Hover your mouse over the property in the editor. They should all be fully documented!

<b><i>Powerup Respawn Trigger Volumes</i></b>

* In order for the Ascentroid game runtime to know where and how to respawn powerups, you need to place <b>Powerup Respawn Trigger Volumes</b> in your level(s).

* Just drag and drop an <b>AscMapKitPowerupRespawnTriggerBox</b> from the <b>Powerup</b> folder, and select which <b>Powerups</b> are allowed to spawn in this volume from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/qfYOUrq.png)

Tip: you can create many Powerup Respawn Trigger Volumes in your level(s) and scale them to size to fit your needs. For example, this level has them setup like this:

![Imgur](https://i.imgur.com/Hw3ct9Y.png)

Note: if you don't add Powerup Respawn Trigger Volumes to your level(s), then powerups will <b><i>not</i></b> respawn after despawning in multiplayer!

<b><i>Enemies</i></b>

* Just drag and drop an <b>AscMapKitEnemyActor</b> from the <b>Enemy</b> folder, and select an <b>Enemy Type</b> from the properties on the right-hand side of the editor:

![Imgur](https://i.imgur.com/NSYSdgH.png)

Note: enemies are represented as billboards/sprites in the editor because the static meshes are commercial assets (purchased) and cannot not be distributed in the map kit. If you would like to modify properties like <i>colors</i>, they are displayed on the cube and sphere meshes attached to the map kit actor (so you can preview them while working).

Note: at the time of this writing, single player and cooperative game modes are still under heavy development, so a lot of properties related to enemies are still in progress. Some of them may not even be functional.

Tip: there are tons of actor properties you can tweak! Hover your mouse over the property in the editor. They should all be fully documented!

<b><i>Summary</i></b>

It's important to remember, in general, that not all actor properties are enabled/functional yet. All properties and behaviors are subject to change as development of the map kit progresses.

If you have any questions about the map kit content, properties, etc, please [email me](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78).

#### <a name="performance-optimization"></a>Keep in mind performance/optimization

* <b><i><u>Use baked lighting</u></i></b>. Avoid full dynamic lighting. What I've learned to do is to use full dynamic lighting while developing a level and testing it out. When I get close to finishing a level, I will switch all of the lighting from dynamic to baked. When ready for production, I'll change the <b>Lighting Quality</b> to <b>Production</b>, and change all of my static mesh asset's <b>Lightmap Resolutions</b> to <b>1024</b> (or higher). <i>Caution</i>: baking lights requires lightmap UVs to be setup on your static meshes, and none of them can be overlapping. Different kinds of [3D Tools](#3d-tools) handle this by placing the lightmap UVs on a separate channel. Due to the subjective nature of this process, you will have to handle this on your own. You should be able to find tutorials on [YouTube](https://www.youtube.com/results?search_query=ue4+blender+lightmap) to figure out how to do this.

* If possible, use [Instanced Static Meshes](https://www.google.com/search?q=ue4+instanced+static+mesh+site%3Aanswers.unrealengine.com) and/or [Hierarchical Instanced Static Meshes (HISM)](https://www.google.com/search?q=ue4+hierarchical+instanced+static+mesh+site:answers.unrealengine.com). You can do [amazing optimizations](https://www.youtube.com/watch?v=oMIbV2rQO4k) using these techniques/tools:

![Imgur](https://i.imgur.com/QrXhiMB.jpg)

* If you are going to use high-poly 3D meshes, I recommend learning how to setup LOD groups. Here is a tutorial: https://www.youtube.com/watch?v=li5qraDIZIM

* If you have more performance/optimization tips you'd like added, please [email me](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78).

#### Scripting is possible, however...

Most scripting capabilities will only run on the client and are not replicated in multiplayer (except in the case where Ascentroid map kit actors send explicit network commands).

Eventually, Ascentroid map kit actors will have events you can attach to in order to perform client-side scripting operations. This is still <i>highly experimental</i>, but here is an example of an event emitted by a secret trigger using [Blueprints](https://docs.unrealengine.com/en-US/ProgrammingAndScripting/Blueprints/GettingStarted/index.html):

![Imgur](https://i.imgur.com/gj43Q9X.png)

When this trigger is deactivated, it will change the visibility of a few static meshes in the level, and spawn some particles. It opens up a secret area in the map, and spawns a grate mesh.

This Blueprint is embedded entirely in the <b>Campaign Content</b> and considered client-side scripting.

The trigger deactivation <i>is</i> an explicit network command sent by the Ascentroid map kit actor (trigger), so all of the clients in the game scripts will operate in the same way.

In the future, I may add generic [RPC-like](https://en.wikipedia.org/wiki/Remote_procedure_call) features for Blueprint-only network communication (depending on how things go).

Lastly, you don't <i>have</i> to use Blueprints. Since the Ascentroid map kit treats your UE4 campaign project like a <b>MOD</b>, you could also use C++ (if you want).

## <a name="faq"></a>FAQ

todo: coming

<!--------------------------------------------->
<!-- todo -->
<!--------------------------------------------->

## Version Control

You should keep your UE4 campaign projects saved somewhere!

I highly recommend something like [Git](https://git-scm.com/book/en/v2/Getting-Started-What-is-Git%3F) (with [LFS enabled](https://git-lfs.github.com/)) (and [learning it](https://www.udemy.com/course/intro-to-git/) if you don't know it).

You can setup free accounts with services like [Github](https://github.com/), or [Bitbucket](https://bitbucket.org/product).

Alternatively, you could setup a local Git server using something like [Bonobo Git Server](https://bonobogitserver.com/).

You could also use [Linux](https://www.linux.com/training-tutorials/how-run-your-own-git-server/) to host a Git server.

As a bare minimum, something as simple as [Google Drive](https://www.google.com/intl/en_jm/drive/), [OneDrive](https://office.live.com/start/onedrive.aspx) and/or [Backblaze](https://www.backblaze.com/) would be a good idea.

You decide.

Note: when Ascentroid gets updated, sometimes I have to upgrade <i><u>UE4 core engine versions</u></i>. This will impact the Ascentroid map kit, <b>and your campaign project(s)</b>! Keep your campaign projects backed up <i>somewhere</i>, because you will be required to go through these upgrades in the future, too, if you want your maps to be compatible with upgrades! I don't have all the details on how this will work yet, but when I do, I'll be adding more information to this documentation. The main thing is, for now: keep your campaign projects backed up!

## Acknowledgments

* Special thanks to <b>Diamond Wolf</b> for contributing a lot of feedback on the map kit while it was being developed. A lot of his ideas were incorporated into what you see.
* Special thanks to <b>[Blarget2](https://www.twitch.tv/blarget2)</b> for testing out the [Ascentroid Map Kit Setup Utility](https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip), and being the first person to start using the map kit.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.