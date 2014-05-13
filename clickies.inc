|---Version 1.3---
| ${FindItem[${}].Spell}
|--Detect clicky item--------------------------
/if (!${Defined[RangeMod]}) {
  /declare RangeMod float outer 1.00
}
|--ALL/ALL clickies------------------------
/delay 1
    /if (${FindItemCount[Resplendent Epaulets]}>0) {
      /if (!${Defined[CritShoulder]}) /declare CritShoulder string outer "Resplendent Epaulets"
      /if (!${Defined[CritShoulderBuff]}) /declare CritShoulderBuff string outer ${FindItem[${CritShoulder}].Spell}
    }
    /if (${FindItemCount[Band of Eternal Chaos]}>0) {
      /if (!${Defined[ChaosWrist]}) /declare ChaosWrist string outer "Band of Eternal Chaos"
      /if (!${Defined[ChaosWristBuff]}) /declare ChaosWristBuff string outer ${FindItem[${ChaosWrist}].Spell}
      /if (!${Defined[ChaosWristTimer]}) /declare ChaosWristTimer timer outer 0
    }
    /if (${FindItemCount[Immaculate Glowing Black Stone]}>0) {
      /if (!${Defined[ZenurixStone]}) /declare ZenurixStone string outer "Immaculate Glowing Black Stone"
    }
    /if (${FindItemCount[Osiris, Gate to the Underworld]}>0) {
      /if (!${Defined[DonorFD]}) /declare DonorFD string outer "Osiris, Gate to the Underworld"
    }
    /if (${FindItemCount[Belt of the Arbiter]}>0) {
      /if (!${Defined[ArbiterBelt]}) /declare ArbiterBelt string outer "Belt of the Arbiter"
      /if (!${Defined[ArbiterBeltTimer]}) /declare ArbiterBeltTimer timer outer 0
    }
    /if (${FindItemCount[Ring of Toor]}>0) {
      /if (!${Defined[SelfLev]}) /declare SelfLev string outer "Ring of Toor"
    }
    /if (${FindItemCount[Dragon Wing Cloak]}>0) {
      /if (!${Defined[LichClicky]}) /declare LichClicky string outer "Dragon Wing Cloak"
      /if (!${Defined[LichBuff]}) /declare LichBuff string outer ${FindItem[${LichClicky}].Spell}
    }
    /if (${FindItemCount[Armguards of Immortal Chaos]}>0) {
      /if (!${Defined[ChaosArms]}) /declare ChaosArms string outer "Armguards of Immortal Chaos"
      /if (!${Defined[ChaosArmsTimer]}) /declare ChaosArmsTimer timer outer 0
    }
    /if (${FindItemCount[Valtron's Necklace of Wonder]}>0) {
      /if (!${Defined[SpellHateNeck]}) /declare SpellHateNeck string outer "Valtron's Necklace of Wonder"
      /if (!${Defined[SpellHateNeckBuff]}) /declare SpellHateNeckBuff string outer ${FindItem[${SpellHateNeck}].Spell}
      /if (!${Defined[SpellHateNeckTimer]}) /declare SpellHateNeckTimer timer outer 0
    }
    /if (${FindItemCount[Ares, Shield of Immortality]}>0) {
      /if (!${Defined[ImmortalityShield]}) /declare ImmortalityShield string outer "Ares, Shield of Immortality"
      /if (!${Defined[ImmortalityShieldBuff]}) /declare ImmortalityShieldBuff string outer ${FindItem[${ImmortalityShield}].Spell}
      /if (!${Defined[ImmortalityShieldTimer]}) /declare ImmortalityShieldTimer timer outer 0
    }
    /if (${FindItemCount[Statue of Draekon]}>0) {
      /if (!${Defined[DraekonStatue]}) /declare DraekonStatue string outer "Statue of Draekon"
      /if (!${Defined[DraekonStatueTimer]}) /declare DraekonStatueTimer timer outer 0
    }
    /if (${FindItemCount[Aged Sarnak Channeler Staff]}>0) {
      /if (!${Defined[PetHasteStaff]}) /declare PetHasteStaff string outer "Aged Sarnak Channeler Staff"
      /if (!${Defined[PetHasteStaffBuff]}) /declare PetHasteStaffBuff string outer ${FindItem[${PetHasteStaff}].Spell}
    }
    /if (${FindItemCount[Solaris, the Fallen Ray]}>0) {
      /if (!${Defined[InfernoNeck]}) /declare InfernoNeck string outer "Solaris, the Fallen Ray"
      /if (!${Defined[InfernoNeckTimer]}) /declare InfernoNeckTimer timer outer 0
    }
    /if (${FindItemCount[Ceribun, the Night Star]}>0) {
        /if (${RangeMod}<1.48) {
          /varset RangeMod 1.48
        }
    }
    /if (${FindItemCount[Vampire Bane Earring]}>0) {
      /if (!${Defined[VampStake]}) /declare VampStake string outer "Vampire Bane Earring"
    }
    /if (${FindItemCount[Mask of Destructive Chaos]}>0) {
      /if (!${Defined[DestChaosMask]}) /declare DestChaosMask string outer "Mask of Destructive Chaos"
      /if (!${Defined[DestChaosMaskBuff]}) /declare DestChaosMaskBuff string outer ${FindItem[${DestChaosMask}].Spell}
    }
    /if (${FindItemCount[Scale of Vistrinda]}>0) {
      /if (!${Defined[VistrindaScale]}) /declare VistrindaScale string outer "Scale of Vistrinda"
    }
    /if (!${Defined[BPIllusionBuff]}) /declare BPIllusionBuff string outer "Illusion: Dark Sage"
    /if (!${Defined[BoomStick]}) /declare BoomStick string outer "Ornament of Immaculate Fire"
    /if (!${Defined[BoomStickRange]}) /declare BoomStickRange float outer ${Spell[Bolt of Flaming Stone Rk. III].Range}
    /if (${FindItemCount[Greaves of the Forsaken]}>0) {
      /if (!${Defined[DonorLeg]}) /declare DonorLeg string outer "Greaves of the Forsaken"
      /if (!${Defined[DonorLegBuff]}) /declare DonorLegBuff string outer ${FindItem[${DonorLeg}].Spell}
    }
    /if (${FindItemCount[Greaves of Erebos]}>0) {
      /if (!${Defined[DonorLeg]}) /declare DonorLeg string outer "Greaves of Erebos"
      /if (!${Defined[DonorLegBuff]}) /declare DonorLegBuff string outer ${FindItem[${DonorLeg}].Spell}
    }
    /if (${FindItemCount[Greaves of Seraph]}>0) {
      /if (!${Defined[DonorLeg]}) /declare DonorLeg string outer "Greaves of Seraph"
      /if (!${Defined[DonorLegBuff]}) /declare DonorLegBuff string outer ${FindItem[${DonorLeg}].Spell}
      /if (!${Defined[DonorLegTimer]}) /declare DonorLegTimer timer outer 0
    }
    /if (${FindItemCount[Aeolus, Boots of the Wind]}>0) {
      /if (!${Defined[DonorBoot]}) /declare DonorBoot string outer "Aeolus, Boots of the Wind"
      /if (!${Defined[DonorBootBuff]}) /declare DonorBootBuff string outer ${FindItem[${DonorBoot}].Spell}
    }
    /if (${FindItemCount[Sune's Vambraces of Eternal Life]}>0) {
      /if (!${Defined[DonorArm]}) /declare DonorArm string outer "Sune's Vambraces of Eternal Life"
      /if (!${Defined[DonorArmTimer]}) /declare DonorArmTimer timer outer 0
    }
    /if (${FindItemCount[Ice Crystal Wristguard]}>0) {
      /if (!${Defined[DonorWristHeal]}) /declare DonorWristHeal string outer "Ice Crystal Wristguard"
    }
    /if (${FindItemCount[Aphrodite's Gauntlets of Desire]}>0) {
      /if (!${Defined[DonorGloves]}) /declare DonorGloves string outer "Aphrodite's Gauntlets of Desire"
    }
    /if (${FindItemCount[Fire Crystal Wristguard]}>0) {
      /if (!${Defined[DonorWristMana]}) /declare DonorWristMana string outer "Fire Crystal Wristguard"
    }
    /if (${FindItemCount[Dark Charm of Travel]}>0) {
      /if (!${Defined[DonorGHCharm]}) /declare DonorGHCharm string outer "Dark Charm of Travel"
    }
    /if (${FindItemCount[Lucky Charm of Travel]}>0) {
      /if (!${Defined[LuckyGHCharm]}) /declare LuckyGHCharm string outer "Lucky Charm of Travel"
    }
    /if (${FindItemCount[Galadriel's Gift]}>0) {
      /if (!${Defined[DonorCure]}) /declare DonorCure string outer "Galadriel's Gift"
    }
    /if (${FindItemCount[Osiris, Gate to the Underworld]}>0) {
      /if (!${Defined[DonorFD]}) /declare DonorFD string outer "Osiris, Gate to the Underworld"
    }
    /if (${FindItemCount[Shawl of Veeshan]}>0) {
      /if (!${Defined[DraekonShoulder]}) /declare DraekonShoulder string outer "Shawl of Veeshan"
      /if (!${Defined[DraekonShoulderTimer]}) /declare DraekonShoulderTimer timer outer 0
    }
    /if (${FindItemCount[Trinket of Destructive Power]}>0) {
      /if (!${Defined[KhasvaPetEar]}) /declare KhasvaPetEar string outer "Trinket of Destructive Power"
      /if (!${Defined[KhasvaPetEarPower]}) /declare KhasvaPetEarPower bool outer FALSE
      /if (!${Defined[KhasvaPetEarBuff]}) /declare KhasvaPetEarBuff string outer ${FindItem[${KhasvaPetEar}].Spell}
      /if (!${Defined[KhasvaPetEarTimer]}) /declare KhasvaPetEarTimer timer outer 0
    }
    /if (${FindItemCount[Immaculate Flowing Black Silk Sash]}>0) {
      /if (!${Defined[ZenuBelt]}) /declare ZenuBelt string outer "Immaculate Flowing Black Silk Sash"
      /if (!${Defined[ZenuBeltBuff]}) /declare ZenuBeltBuff string outer ${FindItem[${ZenuBelt}].Spell}
      /if (!${Defined[ZenuBeltTimer]}) /declare ZenuBeltTimer timer outer 0
    }
    /if (${FindItemCount[Frosty Black Silk Sash]}>0) {
      /if (!${Defined[ZenuBelt]}) /declare ZenuBelt string outer "Frosty Black Silk Sash"
      /if (!${Defined[ZenuBeltBuff]}) /declare ZenuBeltBuff string outer ${FindItem[${ZenuBelt}].Spell}
      /if (!${Defined[ZenuBeltTimer]}) /declare ZenuBeltTimer timer outer 0
    }
    /if (${FindItemCount[Exquisite Charm of Queen Adrianne]}>0) {
      /if (!${Defined[ForestCharm]}) /declare ForestCharm string outer "Exquisite Charm of Queen Adrianne"
    }
    /if (${FindItemCount[Exceptional Charm of Queen Adrianne]}>0) {
      /if (!${Defined[ForestCharm]}) /declare ForestCharm string outer "Exceptional Charm of Queen Adrianne"
    }
    /if (${FindItemCount[Superior Magical Charm of Queen Adrianne]}>0) {
      /if (!${Defined[ForestCharm]}) /declare ForestCharm string outer "Superior Magical Charm of Queen Adrianne"
    }
    /if (${FindItemCount[Advanced Magical Charm of Queen Adrianne]}>0) {
      /if (!${Defined[ForestCharm]}) /declare ForestCharm string outer "Advanced Magical Charm of Queen Adrianne"
    }
    /if (${FindItemCount[Magical Charm of Queen Adrianne]}>0) {
      /if (!${Defined[ForestCharm]}) /declare ForestCharm string outer "Magical Charm of Queen Adrianne"
    }
    /if (${FindItemCount[Advanced Charm of Queen Adrianne]}>0) {
      /if (!${Defined[ForestCharm]}) /declare ForestCharm string outer "Advanced Charm of Queen Adrianne"
    }
    /if (${FindItemCount[Charm of Queen Adrianne]}>0) {
      /if (!${Defined[ForestCharm]}) /declare ForestCharm string outer "Charm of Queen Adrianne"
    }
    /if (${FindItemCount[Symbol of the Hidden Vale]}>0) {
      /if (!${Defined[ValeToken]}) /declare ValeToken string outer "Symbol of the Hidden Vale"
    }
    /if (${FindItemCount[Token of the Vale]}>0) {
      /if (!${Defined[ValeToken]}) /declare ValeToken string outer "Token of the Vale"
    }
    /if (${FindItemCount[Shimmering Portal Fragment]}>0) {
      /if (!${Defined[HOHPortalFrag]}) /declare HOHPortalFrag string outer "Shimmering Portal Fragment"
    }
    /if (${FindItemCount[Art of the Chimera]}>0) {
      /if (!${Defined[WoSPet]}) /declare WoSPet string outer "Art of the Chimera"
      /if (!${Defined[WoSPetBuff]}) /declare WoSPetBuff string outer ${FindItem[${WoSPet}].Spell}
      /if (!${Defined[WoSPetTimer]}) /declare WoSPetTimer timer outer 0
    }
    /if (${FindItemCount[Art of the Murkglider]}>0) {
      /if (!${Defined[WoSPet]}) /declare WoSPet string outer "Art of the Murkglider"
      /if (!${Defined[WoSPetBuff]}) /declare WoSPetBuff string outer ${FindItem[${WoSPet}].Spell}
      /if (!${Defined[WoSPetTimer]}) /declare WoSPetTimer timer outer 0
    }
    /if (${FindItemCount[Art of the Feran]}>0) {
      /if (!${Defined[WoSPet]}) /declare WoSPet string outer "Art of the Feran"
      /if (!${Defined[WoSPetBuff]}) /declare WoSPetBuff string outer ${FindItem[${WoSPet}].Spell}
      /if (!${Defined[WoSPetTimer]}) /declare WoSPetTimer timer outer 0
    }


  |--Healer Clickies-------------------------
  /if (${Me.Class.Name.Equal[Cleric]} || ${Me.Class.Name.Equal[Druid]} || ${Me.Class.Name.Equal[Shaman]}) {
    /if (${FindItemCount[Tears of Frozen Spirits]}>0) {
      /if (!${Defined[ManaTears]}) /declare ManaTears string outer "Tears of Frozen Spirits"
      /if (!${Defined[ManaTearsTimer]}) /declare ManaTearsTimer timer outer 0
    }
    /if (${FindItemCount[Breastplate of the Chaos Slayer]}>0) {
      /if (!${Defined[BPIllusion]}) /declare BPIllusion string outer "Breastplate of the Chaos Slayer"
    }
    /if (${FindItemCount[Blackflame Sphere]}>0) {
      /if (!${Defined[HealBuffClicky]}) /declare HealBuffClicky string outer "Blackflame Sphere"
      /if (!${Defined[HealBuff]}) /declare HealBuff string outer ${FindItem[${HealBuffClicky}].Spell}
    }
    /if (${FindItemCount[Staff of the Earthcrafter]}>0) {
      /if (!${Defined[RezStick]}) /declare RezStick string outer "Staff of the Earthcrafter"
    }
    /if (${FindItemCount[Lava Embroided Cloak]}>0) {
      /if (!${Defined[VolkaraCloak]}) /declare VolkaraCloak string outer "Lava Embroided Cloak"
      /if (!${Defined[VolkaraCloakTimer]}) /declare VolkaraCloakTimer timer outer 291
      /if (!${Defined[VokaraCloakRange]}) /declare VokaraCloakRange float outer ${Spell[Faithful Light Rk. II].Range}
    }
    /if (${FindItemCount[Gloves of the Chaos Slayer]}>0) {
      /if (!${Defined[NadoxGloves]}) /declare NadoxGloves string outer "Gloves of the Chaos Slayer"
      /if (!${Defined[NadoxGlovesTimer]}) /declare NadoxGlovesTimer timer outer 131
      /if (!${Defined[NadoxGlovesRange]}) /declare NadoxGlovesRange float outer ${Spell[Spiritual Touch Rk. I].Range}
    }
    /if (${FindItemCount[Ebony Headband]}>0) {
      /if (!${Defined[SelfLev]}) {
        /declare SelfLev string outer "Ebony Headband"
      } else {
        /varset SelfLev "Ebony Headband"
      }
    }
    /if (${FindItemCount[Gem Inlaid Shield of Power]}>0) {
      /if (!${Defined[CritShield]}) /declare CritShield string outer "Gem Inlaid Shield of Power"
      /if (!${Defined[CritShieldBuff]}) /declare CritShieldBuff string outer ${FindItem[${CritShield}].Spell}
    }
    /if (${FindItemCount[Gem Laced Boots]}>0) {
      /if (!${Defined[DivArbBoots]}) /declare DivArbBoots string outer "Gem Laced Boots"
      /if (!${Defined[DivArbBootsTimer]}) /declare DivArbBootsTimer timer outer 0
    }
  }

  |--Melee Clickies--------------------------
  /if (${Me.Class.Name.Equal[Bard]} || ${Me.Class.Name.Equal[Berserker]} || ${Me.Class.Name.Equal[Beastlord]} || ${Me.Class.Name.Equal[Monk]} || ${Me.Class.Name.Equal[Rogue]} || ${Me.Class.Name.Equal[Ranger]} || ${Me.Class.Name.Equal[Shadow Knight]} || ${Me.Class.Name.Equal[Warrior]} || ${Me.Class.Name.Equal[Paladin]}) {
    /if (${FindItemCount[Sleeves of the Dragon]}>0) {
      /if (!${Defined[SelfLev]}) {
        /declare SelfLev string outer "Sleeves of the Dragon"
      } else {
        /varset SelfLev "Sleeves of the Dragon"
      }
    }
    /if (${FindItemCount[Drachnid Skull Ring]}>0) {
      /if (!${Defined[TwinsRing]}) /declare TwinsRing string outer "Drachnid Skull Ring"
    }
    /if (${FindItemCount[Immaculate Band of Destruction]}>0) {
      /if (!${Defined[TwinsRing]}) /declare TwinsRing string outer "Immaculate Band of Destruction"
    }
    /if (${FindItemCount[Immaculate Band of Frost]}>0) {
      /if (!${Defined[PolarBearRing]}) /declare PolarBearRing string outer "Immaculate Band of Frost"
    }
    /if (${FindItemCount[Charm of Chaos]}>0) {
      /if (!${Defined[ChaosCharm]}) /declare ChaosCharm string outer "Charm of Chaos"
    }
    /if (${FindItemCount[Gloves of the Chaos Master]}>0) {
      /if (!${Defined[NadoxGloves]}) /declare NadoxGloves string outer "Gloves of the Chaos Master"
      /if (!${Defined[NadoxGlovesTimer]}) /declare NadoxGlovesTimer timer outer 0
    }
    /if (${FindItemCount[Woven Fragment of Destruction]}>0) {
      /if (!${Defined[DSKFragment]}) /declare DSKFragment string outer "Woven Fragment of Destruction"
      /if (!${Defined[DSKFragmentTimer]}) /declare DSKFragmentTimer timer outer 0
    }
    /if (${FindItemCount[Armguards of Immortal Chaos]}>0) {
      /if (!${Defined[ChaosArmDebuff]}) /declare ChaosArmDebuff string outer "Armguards of Immortal Chaos"
      /if (!${Defined[ChaosArmDebuffTimer]}) /declare ChaosArmDebuffTimer timer outer 0
      /if (!${Defined[ChaosArmDebuffRange]}) /declare ChaosArmDebuffRange float outer ${Spell[Strength of Power I].Range}
    }
    /if (${FindItemCount[Symbol of the Blue Dragon]}>0) {
      /if (!${Defined[FormOfDefense]}) /declare FormOfDefense string outer "Symbol of the Blue Dragon"
      /if (!${Defined[FormOfDefenseBuff]}) /declare FormOfDefenseBuff string outer ${FindItem[${FormOfDefense}].Spell}
    }
    /if (${FindItemCount[Loop of Chaos]}>0) {
      /if (!${Defined[FormOfDefense]}) /declare FormOfDefense string outer "Loop of Chaos"
      /if (!${Defined[FormOfDefenseBuff]}) /declare FormOfDefenseBuff string outer ${FindItem[${FormOfDefense}].Spell}
    }
    /if (${FindItemCount[Ring of Purified Chaos]}>0) {
      /if (!${Defined[OverHaste]}) /declare OverHaste string outer "Ring of Purified Chaos"
      /if (!${Defined[OverHasteBuff]}) /declare OverHasteBuff string outer ${FindItem[${OverHaste}].Spell}
    }
    /if (${FindItemCount[Thorax Encased Earring]}>0) {
      /if (!${Defined[OverHaste]}) /declare OverHaste string outer "Thorax Encased Earring"
      /if (!${Defined[OverHasteBuff]}) /declare OverHasteBuff string outer ${FindItem[${OverHaste}].Spell}
    }
    /if (${FindItemCount[Earring of Corruption]}>0) {
      /if (!${Defined[OverHaste]}) /declare OverHaste string outer "Earring of Corruption"
      /if (!${Defined[OverHasteBuff]}) /declare OverHasteBuff string outer ${FindItem[${OverHaste}].Spell}
    }
    /if (${FindItemCount[Aged Grey Suede Boots]}>0) {
      /if (!${Defined[OverHaste]}) /declare OverHaste string outer "Aged Grey Suede Boots"
      /if (!${Defined[OverHasteBuff]}) /declare OverHasteBuff string outer ${FindItem[${OverHaste}].Spell}
    }
    /if (${FindItemCount[Shield of the Omniscient]}>0) {
      /if (!${Defined[NadoxTankShield]}) /declare NadoxTankShield string outer "Shield of the Omniscient"
      /if (!${Defined[NadoxTankShieldRange]}) /declare NadoxTankShieldRange float outer ${Spell[Divine Calling Rk. I].Range}
    }
    /if (${FindItemCount[Ebony Symbol of Contortion]}>0) {
      /if (!${Defined[DSK3HateRange]}) /declare DSK3HateRange string outer "Ebony Symbol of Contortion"
      /if (!${Defined[DSK3HateRangeBuff]}) /declare DSK3HateRangeBuff string outer ${FindItem[${DSK3HateRange}].Spell}
    }
    /if (${FindItemCount[Ebony Shield of Mane]}>0) {
      /if (!${Defined[DSK3TankShield]}) /declare DSK3TankShield string outer "Ebony Shield of Mane"
      /if (!${Defined[DSK3TankShieldRange]}) /declare DSK3TankShieldRange float outer ${Spell[Enraged Scowl Rk. II].Range}
    }
    /if (${FindItemCount[Ebony Inlaid Earring]}>0) {
      /if (!${Defined[DSK3TankEar]}) /declare DSK3TankEar string outer "Ebony Inlaid Earring"
    }
    /if (${FindItemCount[Prism of Shadows]}>0) {
      /if (!${Defined[NadoxPrism]}) /declare NadoxPrism string outer "Prism of Shadows"
      /if (!${Defined[NadoxPrismTimer]}) /declare NadoxPrismTimer timer outer 0
    }
    /if (${FindItemCount[Ebony Forged Helmet]}>0) {
      /if (!${Defined[DSKTankHelm]}) /declare DSKTankHelm string outer "Ebony Forged Helmet"
      /if (!${Defined[DSKTankHelmTimer]}) /declare DSKTankHelmTimer timer outer 0
    }
    /if (${FindItemCount[Ring for the Strong]}>0) {
      /if (!${Defined[StrongDefRing]}) /declare StrongDefRing string outer "Ring for the Strong"
      /if (!${Defined[StrongDefRingTimer]}) /declare StrongDefRingTimer timer outer 0
    }
    /if (${FindItemCount[Immaculate Ring of Dolgrem]}>0) {
      /if (!${Defined[TwinsDefRing]}) /declare TwinsDefRing string outer "Immaculate Ring of Dolgrem"
      /if (!${Defined[TwinsDefRingTimer]}) /declare TwinsDefRingTimer timer outer 0
    }
  }

  |--Caster Clickies-------------------------
  /if (${Me.Class.Name.Equal[Enchanter]} || ${Me.Class.Name.Equal[Magician]} || ${Me.Class.Name.Equal[Necromancer]} || ${Me.Class.Name.Equal[Wizard]}) {
    /if (${FindItemCount[Tears of Frozen Mana]}>0) {
      /if (!${Defined[ManaTears]}) /declare ManaTears string outer "Tears of Frozen Mana"
      /if (!${Defined[ManaTearsTimer]}) /declare ManaTearsTimer timer outer 0
    }
    /if (${FindItemCount[Avilaine's Staff of Chaos]}>0) {
      /if (!${Defined[AvilaineStaff]}) /declare AvilaineStaff string outer "Avilaine's Staff of Chaos"
      /if (!${Defined[AvilaineStaffTimer]}) /declare AvilaineStaffTimer timer outer 0
      /if (${RangeMod}<1.48) {
          /varset RangeMod 1.48
      }
    }
    /if (${FindItemCount[Bracelet of Eternal Energy]}>0) {
      /if (!${Defined[ManaBracer]}) /declare ManaBracer string outer "Bracelet of Eternal Energy"
      /if (!${Defined[ManaBracerTimer]}) /declare ManaBracerTimer timer outer 0
    }
    /if (${FindItemCount[Vulthrix, the Warden's Whip]}>0) {
      /if (!${Defined[VulthrixWhip]}) /declare VulthrixWhip string outer "Vulthrix, the Warden's Whip"
      /if (!${Defined[VulthrixWhipRange]}) /declare VulthrixWhipRange float outer ${Spell[${FindItem[${VulthrixWhip}].Spell}].Range}
    }
    /if (${FindItemCount[Vulthrix, the Burger'z Whip]}>0) {
      /if (!${Defined[VulthrixWhip]}) /declare VulthrixWhip string outer "Vulthrix, the Burger'z Whip"
      /if (!${Defined[VulthrixWhipRange]}) /declare VulthrixWhipRange float outer ${Spell[${FindItem[${VulthrixWhip}].Spell}].Range}
    }
    /if (${FindItemCount[Shield of Primordial Power]}>0) {
      /if (!${Defined[NadoxShield]}) /declare NadoxShield string outer "Shield of Primordial Power"
      /if (!${Defined[NadoxShieldRange]}) /declare NadoxShieldRange float outer ${Spell[Ancient: Core Fire].Range}
    }
    /if (${FindItemCount[Immaculate Stud of the Forbidden]}>0) {
      /if (!${Defined[SeravinceEar]}) /declare SeravinceEar string outer "Immaculate Stud of the Forbidden"
      /if (!${Defined[SeravinceEarTimer]}) /declare SeravinceEarTimer timer outer 0
      /if (!${Defined[SeravinceEarRange]}) /declare SeravinceEarRange float outer ${Spell[Immolation of Solusek Ro Rk. II].Range}
    }
    /if (${FindItemCount[Immaculate Fishbone Earring]}>0) {
      /if (!${Defined[ZenurixEar]}) /declare ZenurixEar string outer "Immaculate Fishbone Earring"
      /if (!${Defined[ZenurixEarTimer]}) /declare ZenurixEarTimer timer outer 0
      /if (!${Defined[ZenurixEarRange]}) /declare ZenurixEarRange float outer ${Spell[Bone Strike].Range}
    }
    /if (${FindItemCount[Ebony Headband]}>0) {
      /if (!${Defined[SelfLev]}) {
        /declare SelfLev string outer "Ebony Headband"
      } else {
        /varset SelfLev "Ebony Headband"
      }
    }
    /if (${FindItemCount[Immaculate Loop of Energy]}>0) {
      /if (!${Defined[TwinsRing]}) /declare TwinsRing string outer "Immaculate Loop of Energy"
    }
    /if (${FindItemCount[Robe of the Chaos Champion]}>0) {
      /if (!${Defined[BPIllusion]}) /declare BPIllusion string outer "Robe of the Chaos Champion"
    }
    /if (${FindItemCount[Drachnid Rib Bone Shield]}>0) {
      /if (!${Defined[DSKshield]}) /declare DSKshield string outer "Drachnid Rib Bone Shield"
      /if (!${Defined[DSKshieldTimer]}) /declare DSKshieldTimer timer outer 0
    }
    /if (${FindItemCount[Dark Rod of the Ruined]}>0) {
      /if (!${Defined[DSKstaff]}) /declare DSKstaff string outer "Dark Rod of the Ruined"
      /if (!${Defined[DSKstaffRange]}) /declare DSKstaffRange float outer ${Spell[Lure of Fear].Range}
    }
    /if (${FindItemCount[Dometrius, the Master's Burden]}>0) {
      /if (!${Defined[XeruShoulder]}) /declare XeruShoulder string outer "Dometrius, the Master's Burden"
    }
    /if (${FindItemCount[Band of Dawnfire]}>0) {
      /if (!${Defined[DawnfireRing]}) /declare DawnfireRing string outer "Band of Dawnfire"
      /if (!${Defined[DawnfireRingTimer]}) /declare DawnfireRingTimer timer outer 0
    }
    /if (${FindItemCount[Leggings of the Witch Queen]}>0) {
      /if (!${Defined[DonorLeg]}) /declare DonorLeg string outer "Leggings of the Witch Queen"
      /if (!${Defined[DonorLegRange]}) /declare DonorLegRange float outer ${Spell[Touch of the Witch Queen].Range}
    }
    /if (${FindItemCount[Blue Rod of Zek]}>0) {
      /if (!${Defined[ZekBane]}) /declare ZekBane string outer "Blue Rod of Zek"
      /if (!${Defined[ZekTimer]}) /declare ZekTimer timer outer 0
      /if (!${Defined[ZekBaneRange]}) /declare ZekBaneRange float outer ${Spell[Inferno Blast].Range}
    }
    /if (${FindItemCount[Gloves of the Chaos Champion]}>0) {
      /if (!${Defined[NadoxGloves]}) /declare NadoxGloves string outer "Gloves of the Chaos Champion"
      /if (!${Defined[NadoxGlovesTimer]}) /declare NadoxGlovesTimer timer outer 0
      /if (!${Defined[NadoxGlovesRange]}) /declare NadoxGlovesRange float outer ${Spell[Ancient Frozen Touch].Range}
    }
    /if (${FindItemCount[Girdle of Chaos]}>0) {
      /if (!${Defined[PetToyBelt]}) /declare PetToyBelt string outer "Girdle of Chaos"
    }
    /if (${FindItemCount[Bone Lined Gloves of Energy]}>0) {
      /if (!${Defined[DSKConcussiveGloves]}) /declare DSKConcussiveGloves string outer "Bone Lined Gloves of Energy"
      /if (!${Defined[DSKConcussiveGlovesTimer]}) /declare DSKConcussiveGlovesTimer timer outer 0
      /if (!${Defined[DSKConcussiveGlovesRange]}) /declare DSKConcussiveGlovesRange float outer ${Spell[Concussive Strike Rk. I].Range}
    }
    /if (${FindItemCount[Energized Masquerade Mask]}>0) {
      /if (!${Defined[CritMask]}) /declare CritMask string outer "Energized Masquerade Mask"
      /if (!${Defined[CritMaskBuff]}) /declare CritMaskBuff string outer ${FindItem[${CritMask}].Spell}
    }
  }

  |--Bard Clickies---------------------------
  /if (${Me.Class.Name.Equal[Bard]}) {
    /if (${FindItemCount[Ancient Blade of the Singer]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Blade of the Singer"
    }
    /if (${FindItemCount[Ancient Frozen Blade of Vesagran]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Blade of Vesagran"
    }
    /if (${FindItemCount[Soulsong Breastplate]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Soulsong Breastplate"
    }
    /if (${FindItemCount[Rizlona's Sacred Breastplate]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Rizlona's Sacred Breastplate"
    }
    /if (${FindItemCount[Eloquent Sword of the Minstrel]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Eloquent Sword of the Minstrel"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
      /if (!${Defined[DonorWeapon10Timer]}) /declare DonorWeapon10Timer timer outer 0
    }
    /if (${FindItemCount[Xutheraz, Solusek's Will]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Xutheraz, Solusek's Will"
      /if (!${Defined[DonorWeapon20Buff]}) /declare DonorWeapon20Buff string outer ${FindItem[${DonorWeapon20}].Spell}
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
    }
    /if (${FindItemCount[Crown of the King's Minstrel]}>0) {
      /if (!${Defined[NadoxHelm]}) /declare NadoxHelm string outer "Crown of the King's Minstrel"
      /if (!${Defined[NadoxHelmBuff]}) /declare NadoxHelmBuff string outer ${FindItem[${NadoxHelm}].Spell}
      /if (!${Defined[NadoxHelmTimer]}) /declare NadoxHelmTimer timer outer 0
    }
    /if (${FindItemCount[Crown of the Court Minstrel]}>0) {
      /if (!${Defined[NadoxHelm]}) /declare NadoxHelm string outer "Crown of the Court Minstrel"
      /if (!${Defined[NadoxHelmBuff]}) /declare NadoxHelmBuff string outer ${FindItem[${NadoxHelm}].Spell}
      /if (!${Defined[NadoxHelmTimer]}) /declare NadoxHelmTimer timer outer 0
    }
    /if (${FindItemCount[Vultraix, The Jester's Gift]}>0) {
      /if (!${Defined[DonorChest]}) /declare DonorChest string outer "Vultraix, The Jester's Gift"
    }
  }

  |--Beastlord Clickies----------------------
  /if (${Me.Class.Name.Equal[Beastlord]}) {
    /if (${FindItemCount[Ancient Lord's Totem]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Lord's Totem"
    }
    /if (${FindItemCount[Ancient Frozen Spiritcaller Totem]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Spiritcaller Totem"
    }
    /if (${FindItemCount[Kerzu's Panther Hide Tunic]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Kerzu's Panther Hide Tunic"
    }
    /if (${FindItemCount[Totem of the Animist]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Totem of the Animist"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
    }
    /if (${FindItemCount[Kalthaz, The Spirit's Gift]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Kalthaz, The Spirit's Gift"
      /if (!${Defined[DonorWeapon20Buff]}) /declare DonorWeapon20Buff string outer ${FindItem[${DonorWeapon20}].Spell}
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
    }
    /if (${FindItemCount[Ring of the Warder]}>0) {
      /if (!${Defined[NadoxRing]}) /declare NadoxRing string outer "Ring of the Warder"
      /if (!${Defined[NadoxRingTimer]}) /declare NadoxRingTimer timer outer 0
    }
    /if (${FindItemCount[Band of the Warder]}>0) {
      /if (!${Defined[NadoxRing]}) /declare NadoxRing string outer "Band of the Warder"
      /if (!${Defined[NadoxRingTimer]}) /declare NadoxRingTimer timer outer 0
    }
    /if (${FindItemCount[Altrium, Shroud of the Wild]}>0) {
      /if (!${Defined[DonorChest]}) /declare DonorChest string outer "Altrium, Shroud of the Wild"
    }
  }

  |--Berserker Clickies----------------------
  /if (${Me.Class.Name.Equal[Berserker]}) {
    /if (${FindItemCount[Ancient Axe of Raw Power]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Axe of Raw Power"
    }
    /if (${FindItemCount[Ancient Frozen Taelosian Blood Axe]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Taelosian Blood Axe"
    }
    /if (${FindItemCount[Demerca's Chainmail Tunic]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Demerca's Chainmail Tunic"
    }
    /if (${FindItemCount[Axe of Frenzy]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Axe of Frenzy"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
    }
    /if (${FindItemCount[Kygern, The Trapped Destroyer]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Kygern, The Trapped Destroyer"
    }
    /if (${FindItemCount[Shawl of Rage]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Shawl of Rage"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
    }
    /if (${FindItemCount[Veil of Rage]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Veil of Rage"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
    }
  }

  |--Cleric Clickies-------------------------
  /if (${Me.Class.Name.Equal[Cleric]}) {
    /if (${FindItemCount[Hammer of the High Priest]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Hammer of the High Priest"
      /if (!${Defined[DonorWeapon10Timer]}) /declare DonorWeapon10Timer timer outer 0
    }
    /if (${FindItemCount[Flindara, Beacon of Light]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Flindara, Beacon of Light"
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
    }
    /if (${FindItemCount[Ancient Shield of the Divine]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Shield of the Divine"
    }
    /if (${FindItemCount[Ancient Frozen Aegis of Divinity]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Aegis of Divinity"
    }
    /if (${FindItemCount[Havenguard Breastplate]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Havenguard Breastplate"
    }
    /if (${FindItemCount[Karh`Du's Breastplate of Hope]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Karh`Du's Breastplate of Hope"
    }
  }

  |--Druid Clickies--------------------------
  /if (${Me.Class.Name.Equal[Druid]}) {
    /if (${FindItemCount[Ancient Roots of the Natureguard]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Roots of the Natureguard"
      /if (!${Defined[Epic15Range]}) /declare Epic15Range float outer ${Spell[Nature's Blight].Range}
    }
    /if (${FindItemCount[Ancient Frozen Staff of Brambles]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Staff of Brambles"
      /if (!${Defined[Epic20Range]}) /declare Epic20Range float outer ${Spell[Season's Fury].Range}
    }
    /if (${FindItemCount[Staff of the Forest Friend]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Staff of the Forest Friend"
      /if (!${Defined[DonorWeapon10Timer]}) /declare DonorWeapon10Timer timer outer 0
      /if (!${Defined[DonorWeapon10Range]}) /declare DonorWeapon10Range float outer ${Spell[Wrath of the Forest Friend].Range}
    }
    /if (${FindItemCount[Cerythi, Nature's Spirit]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Cerythi, Nature's Spirit"
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
      /if (!${Defined[DonorWeapon20Range]}) /declare DonorWeapon20Range float outer ${Spell[Fury of Nature].Range}
    }
    /if (${FindItemCount[Immaculate Prism of Life]}>0) {
      /if (!${Defined[SeravincePrism]}) /declare SeravincePrism string outer "Immaculate Prism of Life"
      /if (!${Defined[SeravincePrismTimer]}) /declare SeravincePrismTimer timer outer 0
    }
    /if (${FindItemCount[Symbol of Celestial Calling]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Symbol of Celestial Calling"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 271
    }
    /if (${FindItemCount[Symbol of Empathic Calling]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Symbol of Empathic Calling"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 271
    }
    /if (${FindItemCount[Glardien's Leather Bound Tunic]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Glardien's Leather Bound Tunic"
    }
  }

  |--Enchanter Clickies----------------------
  /if (${Me.Class.Name.Equal[Enchanter]}) {
    /if (${FindItemCount[Ancient Entrancers Staff]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Entrancers Staff"
      /if (!${Defined[Epic15Range]}) /declare Epic15Range float outer ${Spell[Phantasmist's Touch].Range}
      /if (!${Defined[Epic15Timer]}) /declare Epic20Timer timer outer 0
    }
    /if (${FindItemCount[Ancient Frozen Staff of Eloquence]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Staff of Eloquence"
      /if (!${Defined[Epic20Range]}) /declare Epic20Range float outer ${Spell[Phantasmist's Secret].Range}
      /if (!${Defined[Epic20Timer]}) /declare Epic20Timer timer outer 0
    }
    /if (${FindItemCount[Visenrda's Brilliant Robe]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Visenrda's Brilliant Robe"
      /if (!${Defined[T8ChestRange]}) /declare T8ChestRange float outer ${Spell[Incapacitation of the Mind].Range}
    }
    /if (${FindItemCount[Glyph of Power]}>0) {
      /if (!${Defined[EggKeeperCharm]}) /declare EggKeeperCharm string outer "Glyph of Power"
    }
    /if (${FindItemCount[Staff of the Phantasmist]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Staff of The Phantasmist"
      /if (!${Defined[DonorWeapon10Range]}) /declare DonorWeapon10Range float outer ${Spell[Dominating Colors].Range}
    }
    /if (${FindItemCount[Ethulin, the Burning Star]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Ethulin, The Burning Star"
      /if (!${Defined[DonorWeapon20Buff]}) /declare DonorWeapon20Buff string outer ${FindItem[${DonorWeapon20}].Spell}
      /if (!${Defined[DonorWeapon20Range]}) /declare DonorWeapon20Range float outer ${Spell[Visage of the Enchanted].Range}
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
    }
  }

  |--Mage Clickies---------------------------
  /if (${Me.Class.Name.Equal[Magician]}) {
    /if (${FindItemCount[Staff of Elements]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Staff of Elements"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
      /if (!${Defined[DonorWeapon10SelfBuff]}) /declare DonorWeapon10SelfBuff string outer "Growl of the Leopard"
    }
    /if (${FindItemCount[Vurixn, The Angel's Insight]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Vurixn, The Angel's Insight"
      /if (!${Defined[DonorWeapon20Buff]}) /declare DonorWeapon20Buff string outer ${FindItem[${DonorWeapon20}].Spell}
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
    }
    /if (${FindItemCount[Glyph of Power]}>0) {
      /if (!${Defined[EggKeeperCharm]}) /declare EggKeeperCharm string outer "Glyph of Power"
      /if (!${Defined[EggKeeperCharmTimer]}) /declare EggKeeperCharmTimer timer outer 0
    }
    /if (${FindItemCount[Drape of the Elements]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Drape of the Elements"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
      /if (!${Defined[NadoxShoulderRange]}) /declare NadoxShoulderRange float outer ${Spell[Bolt of Flaming Stone Rk. II].Range}
    }
    /if (${FindItemCount[Shawl of the Elements]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Shawl of the Elements"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
      /if (!${Defined[NadoxShoulderRange]}) /declare NadoxShoulderRange float outer ${Spell[Bolt of Flaming Stone Rk. II].Range}
    }
    /if (${FindItemCount[Mermund's Elemental Gown]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Mermund's Elemental Gown"
    }
  }

  |--Monk Clickies---------------------------
  /if (${Me.Class.Name.Equal[Monk]}) {
    /if (${FindItemCount[Ancient Fistwraps of Eternity]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Fistwraps of Eternity"
    }
    /if (${FindItemCount[Ancient Frozen Fistwraps]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Fistwraps"
    }
    /if (${FindItemCount[Driscan's Tunic of the Flame]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Driscan's Tunic of the Flame"
    }
    /if (${FindItemCount[Epaullettes of Peace]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Epaullettes of Peace"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
    }
    /if (${FindItemCount[Epaullettes of Tranquility]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Epaullettes of Tranquility"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
    }
    /if (${FindItemCount[Fist of the Tranquil]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Fist of the Tranquil"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
      /if (!${Defined[DonorWeapon10Timer]}) /declare DonorWeapon10Timer timer outer 0
    }
    /if (${FindItemCount[Nurikath, The Left Hand of Marr]}>0) {
      /if (!${Defined[DonorWeapon20L]}) /declare DonorWeapon20L string outer "Nurikath, The Left Hand of Marr"
      /if (!${Defined[DonorWeapon20LBuff]}) /declare DonorWeapon20LBuff string outer ${FindItem[${DonorWeapon20L}].Spell}
      /if (!${Defined[DonorWeapon20LTimer]}) /declare DonorWeapon20LTimer timer outer 0
    }
    /if (${FindItemCount[Numinad, The Right Hand of Marr]}>0) {
      /if (!${Defined[DonorWeapon20R]}) /declare DonorWeapon20R string outer "Numinad, The Right Hand of Marr"
      /if (!${Defined[DonorWeapon20RBuff]}) /declare DonorWeapon20RBuff string outer ${FindItem[${DonorWeapon20R}].Spell}
      /if (!${Defined[DonorWeapon20RTimer]}) /declare DonorWeapon20RTimer timer outer 0
    }
  }

  |--Necro Clickies--------------------------
  /if (${Me.Class.Name.Equal[Necromancer]}) {
    /if (${FindItemCount[Ancient Frozen Deathwhisper]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Deathwhisper"
      /if (!${Defined[Epic20Range]}) /declare Epic20Range float outer ${Spell[Guardians of Blood].Range}
    }
    /if (${FindItemCount[Tombraider Robe]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Tombraider Robe"
      /if (!${Defined[T8ChestRange]}) /declare T8ChestRange float outer ${Spell[Reapers of Death].Range}
    }
    /if (${FindItemCount[Drak`Tzu's Bone Lined Robe]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Drak`Tzu's Bone Lined Robe"
      /if (!${Defined[T8ChestRange]}) /declare T8ChestRange float outer ${Spell[Reapers of Death].Range}
    }
    /if (${FindItemCount[Scythe of the Darklord]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Scythe of the Darklord"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
    }
    /if (${FindItemCount[Sevarath, The Wraith Caller]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Sevarath, The Wraith Caller"
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
      /if (!${Defined[DonorWeapon20Range]}) /declare DonorWeapon20Range float outer ${Spell[Curse of Death].Range}
    }
    /if (${FindItemCount[Dark Blighted Teardrop Necklace]}>0) {
      /if (!${Defined[DSKneck]}) /declare DSKneck string outer "Dark Blighted Teardrop Necklace"
      /if (!${Defined[DSKneckRange]}) /declare DSKneckRange float outer ${Spell[Ancient: Curse of Mori].Range}
    }
    /if (${FindItemCount[Pendant of the Death Walker]}>0) {
      /if (!${Defined[NadoxNeck]}) /declare NadoxNeck string outer "Pendant of the Death Walker"
      /if (!${Defined[NadoxNeckTimer]}) /declare NadoxNeckTimer timer outer 0
      /if (!${Defined[NadoxNeckRange]}) /declare NadoxNeckRange float outer ${Spell[Cry for Blood Rk. I].Range}
    }
    /if (${FindItemCount[Drinaz, the Final Reaper]}>0) {
      /if (!${Defined[DonorChest]}) /declare DonorChest string outer "Drinaz, the Final Reaper"
    }
  }
  
  |--Paladin Clickies-------------------------
  /if (${Me.Class.Name.Equal[Paladin]}) {
    /if (${FindItemCount[Ancient Sword of Truth]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Sword of Truth"
    }
    /if (${FindItemCount[Ancient Frozen Sword of the Valiant]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Sword of the Valiant"
    }
    /if (${FindItemCount[Holy Sword of Truth]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Holy Sword of Truth"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
    }
    /if (${FindItemCount[Quindor, The Sunderer]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Quindor, The Sunderer"
    }
    /if (${FindItemCount[Xerdin's Breastplate of Light]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Xerdin's Breastplate of Light"
    }
    /if (${FindItemCount[Anubis, the Day Bringer]}>0) {
      /if (!${Defined[DonorChest]}) /declare DonorChest string outer "Anubis, the Day Bringer"
    }
  }

  |--Rogue Clickies--------------------------
  /if (${Me.Class.Name.Equal[Rogue]}) {
    /if (${FindItemCount[Ancient Tool of the Thieves]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Tool of the Thieves"
    }
    /if (${FindItemCount[Ancient Frozen Razor of Entropy]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Razor of Entropy"
    }
    /if (${FindItemCount[Marku's Chainmail Tunic]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Marku's Chainmail Tunic"
    }
    /if (${FindItemCount[Flahran, the Dragon's Bane]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Flahran, the Dragon's Bane"
    }
    /if (${FindItemCount[Razor of the Rogue]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Razor of the Rogue"
      /if (!${Defined[DonorWeapon10Timer]}) /declare DonorWeapon10Timer timer outer 0
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
    }
    /if (${FindItemCount[TriXzin, Guard of the King]}>0) {
      /if (!${Defined[DonorChest]}) /declare DonorChest string outer "TriXzin, Guard of the King"
    }
    /if (${FindItemCount[Shroud of the Deceiver]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Shroud of the Deceiver"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
    }
    /if (${FindItemCount[Cloak of the Deceiver]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Cloak of the Deceiver"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 0
    }
  }

  |--Ranger Clickies--------------------------
  /if (${Me.Class.Name.Equal[Ranger]}) {
    /if (${FindItemCount[Ancient Hunter Blade]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Hunter Blade"
    }
    /if (${FindItemCount[Ancient Frozen Heartwood Blade]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Heartwood Blade"
    }
    /if (${FindItemCount[Banderi's Chainmail Tunic]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Banderi's Chainmail Tunic"
    }
    /if (${FindItemCount[Caythra, the Twin Gazer]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Caythra, the Twin Gazer"
    }
    /if (${FindItemCount[Sword of the Pathfinder]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Sword of the Pathfinder"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
    }
  }

  |--Shadow Knight Clickies-------------------------
  /if (${Me.Class.Name.Equal[Shadow Knight]}) {
    /if (${FindItemCount[Ancient Sword of the Dark]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Sword of the Dark"
    }
    /if (${FindItemCount[Ancient Frozen Sword of the Dark]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Sword of the Dark"
    }
    /if (${FindItemCount[Sword of Hate]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Sword of Hate"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell} Recourse
      /if (!${Defined[DonorWeapon10Range]}) /declare DonorWeapon10Range float outer ${Spell[Dark Drain II].Range}
    }
    /if (${FindItemCount[Rizolith, The Flame Keeper]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Rizolith, The Flame Keeper"
    }
    /if (${FindItemCount[Uthinra's Breastplate of Reaping]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Uthinra's Breastplate of Reaping"
    }
  }

  |--Shaman Clickies-------------------------
  /if (${Me.Class.Name.Equal[Shaman]}) {
    /if (${FindItemCount[Ancient Talisman of Fates]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Talisman of Fates"
      /if (!${Defined[Epic15Range]}) /declare Epic15Range float outer ${Spell[Fateseer's Boon].Range}
    }
    /if (${FindItemCount[Ancient Frozen Spiritstaff of the Heyokah]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Spiritstaff of the Heyokah"
      /if (!${Defined[Epic20Range]}) /declare Epic20Range float outer ${Spell[Prophet's Gift of the Ruchu].Range}
    }
    /if (${FindItemCount[Spiritstaff of the Alchemist]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Spiritstaff of the Alchemist"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
      /if (!${Defined[DonorWeapon10Range]}) /declare DonorWeapon10Range float outer ${Spell[Word of the Alchemist].Range}
    }
    /if (${FindItemCount[Lithuran, The Spirit Weeper]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Lithuran, The Spirit Weeper"
      /if (!${Defined[DonorWeapon20Range]}) /declare DonorWeapon20Range float outer ${Spell[Turgur's Infestation].Range}
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
    }
    /if (${FindItemCount[Immaculate Prism of Life]}>0) {
      /if (!${Defined[SeravincePrism]}) /declare SeravincePrism string outer "Immaculate Prism of Life"
      /if (!${Defined[SeravincePrismTimer]}) /declare SeravincePrismTimer timer outer 0
    }
    /if (${FindItemCount[Symbol of Translucent Spirits]}>0) {
      /if (!${Defined[NadoxShoulder]}) /declare NadoxShoulder string outer "Symbol of Translucent Spirits"
      /if (!${Defined[NadoxShoulderTimer]}) /declare NadoxShoulderTimer timer outer 271
      /if (!${Defined[NadoxShoulderRange]}) /declare NadoxShoulderRange float outer ${Spell[Nature's Prayer Rk. I].Range}
    }
    /if (${FindItemCount[Bara'Dri's Chainmail Tunic]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Bara'Dri's Chainmail Tunic"
    }
  }

  |--Warrior Clickies-------------------------
  /if (${Me.Class.Name.Equal[Warrior]}) {
    /if (${FindItemCount[Ancient Sword of the Champion]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Sword of the Champion"
    }
    /if (${FindItemCount[Ancient Frozen Sword of the Champion]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Sword of the Champion"
    }
    /if (${FindItemCount[Artorias, the Abysswalker]}>0) {
      /if (!${Defined[DonorChest]}) /declare DonorChest string outer "Artorias, the Abysswalker"
    }
    /if (${FindItemCount[Rizoel, Blade of The Angel]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Rizoel, Blade of The Angel"
    }
    /if (${FindItemCount[Vicsu's Crested Breastplate]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Vicsu's Crested Breastplate"
    }
    /if (${FindItemCount[Band of the Gargoyle]}>0) {
      /if (!${Defined[GargoyleRing]}) /declare GargoyleRing string outer "Band of the Gargoyle"
      /if (!${Defined[GargoyleRingTimer]}) /declare GargoyleRingTimer timer outer 0
    }
  }

  |--Wizard Clickies-------------------------
  /if (${Me.Class.Name.Equal[Wizard]}) {
    /if (${FindItemCount[Ancient Prismatic Staff of Power]}>0) {
      /if (!${Defined[Epic15]}) /declare Epic15 string outer "Ancient Prismatic Staff of Power"
      /if (!${Defined[Epic15Range]}) /declare Epic15Range float outer ${Spell[Ether Flame].Range}
    }
    /if (${FindItemCount[Ancient Frozen Staff of Power]}>0) {
      /if (!${Defined[Epic20]}) /declare Epic20 string outer "Ancient Frozen Staff of Power"
      /if (!${Defined[Epic20Range]}) /declare Epic20Range float outer ${Spell[Complete Destruction].Range}
    }
    /if (${FindItemCount[Staff of the Sorcerer]}>0) {
      /if (!${Defined[DonorWeapon10]}) /declare DonorWeapon10 string outer "Staff of the Sorcerer"
      /if (!${Defined[DonorWeapon10Buff]}) /declare DonorWeapon10Buff string outer ${FindItem[${DonorWeapon10}].Spell}
      /if (!${Defined[DonorWeapon10Timer]}) /declare DonorWeapon10Timer timer outer 0
    }
    /if (${FindItemCount[Turyn, The Dawn Breaker]}>0) {
      /if (!${Defined[DonorWeapon20]}) /declare DonorWeapon20 string outer "Turyn, The Dawn Breaker"
      /if (!${Defined[DonorWeapon20Buff]}) /declare DonorWeapon20Buff string outer ${FindItem[${DonorWeapon20}].Spell}
      /if (!${Defined[DonorWeapon20Timer]}) /declare DonorWeapon20Timer timer outer 0
    }
    /if (${FindItemCount[Al`Kabor's Lost Robe]}>0) {
      /if (!${Defined[T8Chest]}) /declare T8Chest string outer "Al`Kabor's Lost Robe"
    }
    /if (${FindItemCount[Engraved Ethereal Bound Earring]}>0) {
      /if (!${Defined[NadoxEar]}) /declare NadoxEar string outer "Engraved Ethereal Bound Earring"
      /if (!${Defined[NadoxEarTimer]}) /declare NadoxEarTimer timer outer 0
      /if (!${Defined[NadoxEarRange]}) /declare NadoxEarRange float outer ${Spell[Flame Blaze Rk. II].Range}
    }
    /if (${FindItemCount[Twisted Ethereal Bound Earring]}>0) {
      /if (!${Defined[NadoxEar]}) /declare NadoxEar string outer "Twisted Ethereal Bound Earring"
      /if (!${Defined[NadoxEarTimer]}) /declare NadoxEarTimer timer outer 0
      /if (!${Defined[NadoxEarRange]}) /declare NadoxEarRange float outer ${Spell[Flame Blaze Rk. I].Range}
    }
    /if (${FindItemCount[Dark Carmine Loop of Loathing]}>0) {
      /if (!${Defined[DSKear]}) /declare DSKear string outer "Dark Carmine Loop of Loathing"
      /if (!${Defined[DSKearRange]}) /declare DSKearRange float outer ${Spell[Ancient: Core Fire].Range}
    }
  }
  
