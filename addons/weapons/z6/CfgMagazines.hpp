class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_300Rnd_Z6): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] Z-6 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 300<br/>Used In: Z-6";

        model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
        picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaMachineGun_Blue);
        count = 300;
        initSpeed = 920;
        mass = 9;
    };

    class Aux12thFleet_Mag_Z6: CLASS(Mag_300Rnd_Z6) {
        SCOPE_HIDDEN;
        descriptionShort = "Energy Cell Pack<br/>Rounds: 300<br/>Used In: Z-6<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};