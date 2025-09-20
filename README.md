# Ascentroid Map Kit

Current Build Status: <b>Prototype / Experimental</b>

The Ascentroid Map Kit is an Unreal Engine 4 ("UE") plugin you install into the UE editor to assist with the creation of campaigns and levels for Ascentroid.

The map kit, essentially, builds a <b>\*.pak</b> file, which treats your campaign/content like a game <b>MOD</b> for Ascentroid. It will also use a custom <b>\*.json</b> file for  important, and required, meta data for your campaign.

What's great about this is that it allows map creators to utilize <b><i>almost all of the full features/capabilities of UE</i></b>!

## Prerequisites

1) Only <b>Windows</b>, <b>x64</b> is supported <i>right now</i>. Make sure you meet the [required Hardware and Software Specifications for Unreal Engine](https://docs.unrealengine.com/4.26/en-US/Basics/InstallingUnrealEngine/RecommendedSpecifications/).

2) Since UE treats a campaign like a <b>MOD</b>, it <b>requires Microsoft's C++ compiler</b>. You have two options:

* <b><i>Option #1</i></b> (free, smaller download size): Install [Visual Studio Code](https://code.visualstudio.com/docs/?dv=win) + [Visual Studio 2019 Build Tools](https://drive.google.com/file/d/1tjPzES5Yf-pTOqqYqEWvvamk6hFzUpRt/view?usp=sharing) following this [installation tutorial](http://jollymonsterstudio.com/2018/11/02/unreal-c-with-visual-studio-code/). ✅ <b><u>RECOMMENDED</u></b>

* <b><i>Option 2</i></b> (free, larger download size): Install [Visual Studio 2019 or 2017 Community Edition](https://visualstudio.microsoft.com/downloads/) following this [installation tutorial](https://docs.unrealengine.com/4.26/en-US/ProductionPipelines/DevelopmentSetup/VisualStudioSetup/). ❌ <b><u>NOT RECOMMENDED</u></b>

3) Install Unreal Engine <b><u>4.26.2</u></b> by following the [official installation guide](https://docs.unrealengine.com/4.26/en-US/installing-unreal-engine/). When prompted, select the <b>Publishing License</b>.

* <b>IMPORTANT</b>: You <b>MUST</b> install the specific UE version <b><u>4.26.2</u></b>. Do <b>NOT</b> install a different version! Ascentroid is built on <b><u>4.26.2</u></b>. If you use a different version, your campaigns will <b>NOT</b> work! If you create a campaign on the wrong engine version, you will have to delete it and re-create it with the correct engine version!

![Imgur](https://i.imgur.com/6P5kjij.png)

* #1: In the Epic Games Launcher, click <b>Unreal Engine</b> on the left menu.
* #2: Click <b>Library</b> on the top menu.
* #3: Click the <b>[+]</b> icon to the right of <b>Engine Versions</b>.
* #4: Click the dropdown on the engine version number.
* #5: Select <b>4.26.2</b> from the dropdown and click install. When the install is finsihed, this is the version that should appear as installed:

![Imgur](https://i.imgur.com/w4ats9o.png)

4) If not already installed, install the [.NET SDK 4.6.2](https://drive.google.com/file/d/1DxFDQJG4bHocba8UK5NfXTtq5BEbpihQ/view?usp=sharing). This is <b>required</b> for the Unreal Engine Swarm Engine (needed for light building).

Note: you may need to run all installations as a <b>Windows Administrator</b> user.

<br/><br/><br/>

### Setup Your Campaign Project

1) Install Ascentroid (the game). The latest test builds are posted in the [Ascentroid Discord](https://discord.gg/pktfw78) in the <b>#downloads</b> channel.

2) Install the Ascentroid Map Kit Tool (as a **Windows Administrator**): [ascentroid-mapkit-tool_0.0.1_x64_en-US.msi](https://drive.google.com/file/d/1d6aqJWmnY3m9d7hqudIg-Gp79zMO0AAs/view?usp=sharing)

3) Use the Ascentroid Map Kit Tool to create a campaign.

4) All content must be placed in the UE project <b>Campaign Content</b> folder, or it will not get cooked into your <b>\*.pak</b> file!

5) There should be an Ascentroid editor panel in the Unreal Engine editor to help you create Ascentroid content for your level(s). Look for the icon in the main toolbar.

6) Consult the FAQ in the Ascentroid editor panel. Use it as a guide.

7) Remember to bake lights and do not use dynamic lighting (for performance)!

8) Use the "Cook" button in the Ascentroid Map Kit Tool to create the <b>\*.json</b> and <b>\*.pak</b> files for your campaign.

9) Use the "Backup" button in the Ascentroid Map Kit Tool to make backup copies of your Unreal Engine project (as needed).

10) The <b>\*.json</b> and <b>\*.pak</b> files for your campaign will be copied to the Ascentroid game folder:
```
[game root]\Ascentroid\Content\Ascentroid\Campaigns
```

11) If everything worked, you can now test your campaign in the game, Ascentroid!

12) Visit Github for more documentation: https://github.com/Ascentroid/Ascentroid

13) Visit YouTube for tutorials: http://youtube.ascentroid.com

<br/><br/><br/>

## Important Notes

1) All content must be placed in the <b>Campaign Content</b> folder, or it will not get cooked into your <b>\*.pak</b> file!

2) Everything you see in this map kit and documentation is subject to change as development progresses. If you have a question or comment, [let me know](mailto:ascentroid@gmail.com).

3) Ascentroid uses a large scale in order to fix problems with collision. A cube scale of 20m x 20m x 20m is the general standard.

4) Read the [FAQ](#faq).

<br/><br/><br/>

## How do I build stuff?

#### You may want to learn some basics about Unreal Engine:

* https://docs.unrealengine.com/en-US/index.html
* Import 3D meshes: https://www.youtube.com/watch?v=_FgedJWInL0
* Lighting basics: https://www.youtube.com/watch?v=FsjqVIyr0O4

<br/>

#### If you don't want to learn 3D modeling tools, you can try some Marketplace assets:

##### <a name="mesh-tool"></a>[Mesh Tool](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor) - <i>highly recommended</i>!

[Mesh Tool](https://marynate.itch.io/mesh-tool) is a commercial (paid) UE plugin which allows you to edit mesh assets and prototype props and levels without leaving the UE Editor. It also includes basic UV mapping tools!

![MeshTool](https://d3kjluh73b9h9o.cloudfront.net/original/3X/5/3/53e2d19b206094fc4216cbdd4e95c5769c93dd91.jpeg)

![MeshTool](https://d3kjluh73b9h9o.cloudfront.net/original/3X/c/4/c4df8cfb5c1d52ecf550af5708bbf162b2bc9a8e.jpeg)

Mesh Tool links:

* [Unreal Engine Forums](https://forums.unrealengine.com/unreal-engine/marketplace/107840-mesh-tool-a-mesh-editor)
* [Get Mesh Tool on the Marketplace](https://www.unrealengine.com/marketplace/mesh-tool)
* [Get Mesh Tool on itch.io](https://marynate.itch.io/mesh-tool)
* [YouTube Tutorials](https://www.youtube.com/playlist?list=PLAKCoctl4aHxyY9fZbQIpdtEdzlj09GSn)
* [User Guide](https://docs.google.com/document/d/1yCEFGz4LEWdhZEw3bk_tCPI3Gg6D-29_AhtkeWJqm1g/pub)
* [Issue Tracker](https://github.com/marynate/mesh-tool/issues)

Tip: Keep an eye out for asset sales. Sometimes you can get a helpful tool for less, or even sometimes <i>free</i>, during a sale.

<br/>

##### <a name="other-marketplace-content"></a>Other Fab Assets

You can try using more [assets](https://www.fab.com/) from Fab here: https://www.fab.com/

<br/>

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

<br/><br/><br/>

#### <a name="import-3d-meshes"></a>Importing 3D Meshes into UE

If you want per-poly collision on the 3D mesh you are going to import into UE:

* When importing your FBX, uncheck <b>Auto Generate Collision</b>:

![Imgur](https://i.imgur.com/A5zVOvi.png)

* Once it has been imported, edit your mesh in UE and go to the collision properties. Set the <i>Collision Complexity</i> to <b>Use Complex Collision As Simple</b>. This tells the engine to use per-poly collision on this mesh.

![Imgur](https://i.imgur.com/6ei4Tg7.png)

* Note: keep in mind any additional work you may need to consider for [performance/optimization](#performance-optimization).

<br/><br/><br/>

#### Import levels from other games

Descent 1 and 2:

Convert old levels using Arne's DesLevelObj tool:
* [Download DesLevelObj](https://github.com/arbruijn/DesLevelObj/releases)

The Ascentroid Map Kit includes a texture remapping definition file you can use with DesLevelObj here:
* [Download DesLevelObj_Ascentroid_Texture_Remap.json](https://raw.githubusercontent.com/Ascentroid/Ascentroid/refs/heads/master/MapKit/DesLevelObj/DesLevelObj_Ascentroid_Texture_Remap.json)

Convert OBJ to FBX using AutoDesk FBX Converter 2013:
* [Download AutoDesk FBX Converter 2013](https://drive.google.com/file/d/10-3j3FsgTNJpqcoRJ6ukGrQSN8_pWF_H/view?usp=sharing)

![Imgur](https://i.imgur.com/PbdjoPb.png)

Common steps in Unreal Engine's editor (not in order) to perform a level conversion:
* Unreal Engine project settings: Generate project a ID, otherwise the campaign won't cook
* Unreal Engine world settings: Set num skylights to 0 (this saves some light build processing time)
* Unreal Engine world settings: Check "Force no precompute lights" (this sets lights to fully dynamic, so you can build without having to light build)
* Unreal Engine level: Place global items and effects (copy from Template campaign)
* Unreal Engine level: Place global lights, amount, positioning (copy from Template campaign)
* Unreal Engine level: Setup navmap, positioning, sizing to encompass the level with some padding (necessary, otherwise the navmap fog of war won't work)
* Unreal Engine world outliner: Folder organization!
* Unreal Engine content manager: Folder organization!
* Unreal Engine content manager: Import FBX of your level and review the import options
* Unreal Engine content manager: Update your level static mesh to set Collision Complexity to "Use Complex Collision as Simple"
* Unreal Engine content manager: Update your level static mesh Light Map Resolution to something high like "1024" or "2048" ("1024" is usually high enough)
* Unreal Engine content manager: Move textures to its own content folder
* Unreal Engine content manager: Move materials to its own content folder
* Unreal Engine content manager: Edit materials (for cartoony style, set Metallic and Specular to "0" (zero), and Roughness to "1")
* Unreal Engine level: Add player starts from the map kit
* Unreal Engine level: Add powerup respawn triggers from the map kit
* Unreal Engine level: Add doors from the map kit (remember to set unique IDs for all!)
* Unreal Engine level: Add decor (grates, signs, etc)
* Unreal Engine level: Add lights (copy from template campaign if you want)
* Unreal Engine level: Add powerups from the map kit
* Unreal Engine level: Add level author decor letters and lights for them (if you want)
* Unreal Engine world settings: Uncheck "Force no precompute lights" (turns off dynamic lights to prepare for light building)
* Unreal Engine level: Add any desired triggers from the map kit (if applicable)
* Unreal Engine level: Add any desired Blueprint scripting (if applicable)
* Unreal Engine level: Adjust global lights (lights will be brighter when light building, so turn them down)
* Unreal Engine light build settings: Set the light build quality to "Production"
* Unreal Engine level: Build lights
* Unreal Engine content manager: Fix level light map UVs and resolution if necessary
* Unreal Engine level: Tweak and build lights repeatedly until you get it right (toggle "Force no precompute lights" in world settings to help; switch from dynamic to static to dynamic to static repeatedly to help figure out good lighting techniques in combination with light building [with the goal of producing final, baked, static lights])
* Unreal Engine level: Run Cook.bat
* Finally: Test your campaign in the game. If it looks good, zip the campaign json and pak files, and offer to players (mission database may become available in the future, recommend something like Google Drive in the meantime)

<br/><br/><br/>

### <a name="map-kit-usage"></a>Ascentroid Map Kit Usage

<b>Overview</b>

The Ascentroid map kit contains pre-fab assets and actors you can use in your UE campaign project level(s).

<b>Pre-fab Content</b>

* Use the Ascentroid UE editor panel to add pre-fab content. Feel free to explore this content to use in your project.

* If you instead wanted to use your own material(s), create them in the <b>Campaign Content</b> folder, and then use it on a pre-fab. It should work. All content in the <b>AscMapKit Content</b> folder is shared with the game runtime. You should even be able to, for example, create material instances that reference base materials inside the <b>AscMapKit Content</b> folder. However, if this doesn't work, [please let me know](mailto:ascentroid@gmail.com) right away.

* I'll be adding more pre-fab asset content to the map kit as it is developed. Eventually, I foresee the community developing and submitting new assets for the map kit as well! Perhaps, in the future, we could even build a completely separate, community asset pack system!

<b><i>Summary</i></b>

It's important to remember, in general, that not all actor properties are enabled/functional yet. All properties and behaviors are subject to change as development of the map kit progresses.

If you have any questions about the map kit content, properties, etc, please [email me](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78).

<br/><br/><br/>

### <a name="performance-optimization"></a>Keep in mind performance/optimization

* <b><i><u>Use baked lighting</u></i></b>. Avoid full dynamic lighting. What I've learned to do is to use full dynamic lighting while developing a level and testing it out. When I get close to finishing a level, I will switch all of the lighting from dynamic to baked. When ready for production, I'll change the <b>Lighting Quality</b> to <b>Production</b>, and change all of my static mesh asset's <b>Lightmap Resolutions</b> to <b>1024</b> (or higher). <i>Caution</i>: baking lights requires lightmap UVs to be setup on your static meshes, and none of them can be overlapping. Different kinds of [3D Tools](#3d-tools) handle this by placing the lightmap UVs on a separate channel. Due to the subjective nature of this process, you will have to handle this on your own. You should be able to find tutorials on [YouTube](https://www.youtube.com/results?search_query=UE+blender+lightmap) to figure out how to do this.

* If possible, use [Instanced Static Meshes](https://www.google.com/search?q=UE+instanced+static+mesh+site%3Aanswers.unrealengine.com) and/or [Hierarchical Instanced Static Meshes (HISM)](https://www.google.com/search?q=UE+hierarchical+instanced+static+mesh+site:answers.unrealengine.com). You can do [amazing optimizations](https://www.youtube.com/watch?v=oMIbV2rQO4k) using these techniques/tools:

![Imgur](https://i.imgur.com/QrXhiMB.jpg)

* If you are going to use high-poly 3D meshes, I recommend learning how to setup LOD groups. Here is a tutorial: https://www.youtube.com/watch?v=li5qraDIZIM

* If your level static meshes are high-poly, it would be a good idea to break them apart into several smaller mesh pieces (instead of one big mesh). If you are using per-poly collision for your level mesh, a giant mesh will require more computation and likely affect game performance. Smaller meshes should perform better. However, if your level is small and doesn't have many polygons, a single mesh is probably fine. You will have to test it out and decide for yourself.

* If you have more performance/optimization tips you'd like added, please [email me](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78).

<br/><br/><br/>

#### MOD Support

Tentatively, Ascentroid may support scripting with limited Blueprints support, and [UnLua](https://github.com/Tencent/UnLua/blob/master/Docs/EN/UnLua_Programming_Guide.md).

The Ascentroid Map Kit Tool currently has pre-alpha/prototype support for [UnLua](https://github.com/Tencent/UnLua/blob/master/Docs/EN/UnLua_Programming_Guide.md). Download the tool and take a look at the MOD section.

<br/><br/><br/>

## <a name="faq"></a>FAQ

Where can I learn more about the game?

`See: ` https://ascentroid.com/faq.html

How do I handle different game modes?

`Ascentroid currently only has one game mode: deathmatch. When that changes, this documentation will be updated.`

How do I handle single player versus multiplayer?

`Currently, you can run campaigns in either mode (no restrictions). However, cooperative does not work. All enemies will run client-side and are not replicated in multiplayer (yet).`

Why don't you have more pre-defined assets we can use?

`This is a solo indie game development effort, currently without funding.`

Why is it so difficult to convert levels from other games?

`Well, this is a solo indie game development effort, currently without funding.`

Why do I have to use 3D tools to build maps? Why didn't you build something easier for people?

`UE is capable to doing a lot out-of-the-box, however, this means you have to put in the effort and learn how to do things yourself. To get started quickly, I highly recommend using ` [SuperGrid](#supergrid)

Why is the setup so complicated?

`It depends on your capabilities. When testing the setup utility, Blarget2 was up and running with his first campaign in about 15 minutes. If you are not technically capable, you probably shouldn't be trying to make campaigns in Ascentroid.`

Is there a reactor?

`No. Single player and cooperative game modes have yet to be developed.`

Is there an escape tunnel?

`Well, no. Single player and cooperative game modes have yet to be developed.`

Do campaigns/levels auto-download if other players don't have them?

`Currently, no. You have to send the file(s) to other players manually. If this changes, I will update this documentation.`

How can I setup my campaign to transition between levels?

`This is not supported yet. It should be coming in the future. However, currently, you can select individual levels in a campaign when starting a single player game, or when hosting a new multiplayer game.`

Can I contribute to the map kit to provide more pre-fab asset content?

`Maybe! Let's chat! See: ` [Contact](#contact)

Why does the Ascentroid map kit limit modding abilities?

`Because I'm learning how to do this stuff while working on this project. Depending on how much effort it will take, and where the direction of the project goes, I may expand what it is capable of. For now, it is limited.`

I have more questions, what should I do?

`See:` [Contact](#contact)

<br/><br/><br/>

## Version Control

You should keep your UE campaign projects saved somewhere!

I highly recommend something like [Git](https://git-scm.com/book/en/v2/Getting-Started-What-is-Git%3F) (with [LFS enabled](https://git-lfs.github.com/)) (and [learning it](https://www.udemy.com/course/intro-to-git/) if you don't know it).

You can setup free accounts with services like [Github](https://github.com/), or [Bitbucket](https://bitbucket.org/product).

Alternatively, you could setup a local Git server using something like [Bonobo Git Server](https://bonobogitserver.com/).

You could also use [Linux](https://www.linux.com/training-tutorials/how-run-your-own-git-server/) to host a Git server.

At the bare minimum, using something as simple as [Google Drive](https://www.google.com/intl/en_jm/drive/), [OneDrive](https://office.live.com/start/onedrive.aspx) and/or [Backblaze](https://www.backblaze.com/) would be a good idea.

You decide.

Note: when Ascentroid gets updated, sometimes I have to upgrade <i><u>UE core engine versions</u></i>. This will impact the Ascentroid map kit, <b>and your campaign project(s)</b>! Keep your campaign projects backed up <i>somewhere</i>, because you will be required to go through these upgrades in the future, too, if you want your maps to be compatible with upgrades! I don't have all the details on how this will work yet, but when I do, I'll be adding more information to this documentation. The main thing is, for now: keep your campaign projects backed up!

<br/><br/><br/>

## Acknowledgments

* Special thanks to <b>Diamond Wolf</b> for contributing a lot of feedback on the map kit while it was being developed. A lot of his ideas were incorporated into what you see. He also made the level in the campaign <b>Rubicon</b>, which was the first community-based level imported into Ascentroid using the map kit.
* Special thanks to <b>[Blarget2](https://www.twitch.tv/blarget2)</b> for testing out the [Ascentroid Map Kit Setup Utility](https://github.com/Ascentroid/Ascentroid/blob/latest-stable/MapKit/Setup/AscMapKitSetup.zip), and being the first person to start using the map kit.

## <a name="contact"></a>Contact

Please email me at [ascentroid@gmail.com](mailto:ascentroid@gmail.com), or find me on the [Ascentroid Discord](https://discord.gg/pktfw78). My online handle is <b>Verran</b>.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.