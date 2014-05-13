|--Generic Actions on THF----------------
Sub Commands
  /echo [${Time.Time24}] Command list:
  /echo /attk -- Tells your team to target your target and engage in combat.
  /echo /stickme -- Tells your team to stick to you. If they are too far, out of sight, or in the wrong zone they will notify you.
  /echo /sticktar -- Tells your team to stick to your current target.
  /echo /near -- Tells your team to notify you if they are not nearby. Useful to check if someone got stuck or lost while traveling.
  /echo /healme -- Tells your healers to target you and begin healing. Any later commands will break this action. Example: /stickme will interrupt /healme.
  /echo /cohtar -- Summon the targeted player with "Call of the Hero" (spell or item). It autodetects what item/spell is applicable.
  /echo /coh or /bcoh -- Summon all raid members in the zone with "Call of the Hero" (spell or item) if they are not nearby.
  /echo /cohteam or /bcohteam -- Summon only your team members (as set in the groups.inc file) in the zone with "Call of the Hero" (spell or item) if they are not nearby.
  /echo /lootcorpse or /blootcorpse -- Clears player's own corpses from area.
  /echo /showcorpse -- Reveals hidden/bugged corpses.
  /echo /consentme -- Tells all players to give you consent for corpse dragging.
  /echo /summoncorpses -- Summons all nearby player corpses. Will fail on those that have not consented you.
  /echo /reznear or /breznear -- Rezzes all nearby player corpses. Requires Donor Gloves OR Staff of the Earthcrafter.
  /echo /yes or /byes -- Accepts all pop-up window confirmations (quests, teleporting, etc).
  /echo /gh or /bgh -- Ports to the Guild Hall using any available clicky item.
  /echo /ghteam -- Uses the donor guild hall teleporter in rapid succession, commanding your team to use the teleporter NPCs one-by-one. **Must have team in very close proximity**
  /echo /hoh or /bhoh -- Ports to Halls of Honor using the Portal Fragment.
  /echo /vale or /bvale -- Ports to The Hidden Vale using either the Token of the Vale or the Symbol of the Hidden Vale.
  /echo /forest or /bforest -- Ports to The Hidden Forest using the Queen Adrianne charm.
  /echo /lootwhore -- **USE CAREFULLY** Checks every nearby NPC corpse for loot. It will loot all stackable items and _destroy all else_. Useful for farming stackable items.
  /echo /chaos or /bchaos -- Will equip the mask walk the player onto the portal pad to enter The Temple of Marr to fight The Chaos. Once zoned, it will re-equip the previous mask.
  /echo /settings or /bsettings -- Sets /tgb, /hidecorpse, /pet focus, /pet hold, /pet no taunt appropriately for all classes.
  /echo /petweap -- *Be sure to have an available bag slot open* Use on a player. Will target the player's pet, move to the pet, summon pet weapons, and trade them to the pet, and then destroy the bag when done.
  /echo /rzpetweap -- Targets player's pet, moves to pet, and summons then trades two Summoned: Staff of War to the pet. Must have spell memmed prior.
  /echo /macros -- Runs the class macro on all players.
  /echo /longbuff or /blongbuff -- Buffs the entire team with long-duration buffs.
  /echo /shortbuff or /bshortbuff -- Buffs the entire team with short-duration buffs.
  /echo /squelch /tarid -- Tells all players to target your target.
  /echo /petattk -- Tells all players to target your target and send pets in to attack.
  /echo /pethold -- Tells all players to place their pets on /pet hold.
  /echo /aura or /baura -- Casts a player's aura using /say #auracast.
  /echo /stats -- Brings up EMU server stats using /say #mystats.
  /echo /hold or /bhold -- Halts all actions, stopping attack and calling pets back.
  /echo /idle or /bidle -- Places all players in an idle mode where they check their buffs, pets, mana/hp levels, and spells - also does aoe mana regeneration with applicable items.
  /echo /solo -- Engages mob in combat for this player only. Combat for a healer is defined as healing whomever the mob is targeting.
  /echo /burn or /bburn -- Initiates all high-dps cooldown items/disciplines for burn mode.
  /echo /killnear or /bkillnear -- Attempts to kill all nearby mobs, moving to the next when one dies until all are gone.
  /echo /noselos or /bnoselos -- Tells the bard to stop twisting Selos. Useful to reduce movement speed of pets so that they do not overshoot their target and get riposted to death.
  /echo /selos or /bselos -- Tells the bard to resume twisting Selos.
  /echo /bufftargetl or /bbufftargetl -- Cast long-duration buffs ('l' for long) on the target.
  /echo /bufftargets or /bbufftargets -- Cast short-duration buffs ('s' for short) on the target.
  /echo /formgroups -- Tells group leaders to send out group invites, as designated in the groups.inc file. **Requires MQ2AutoGroup established for members to auto-accept group invites**
  /echo /formraid -- Invites all group leaders to raid, as designated in the groups.inc file. **Requires MQ2AutoGroup established for members to auto-accept group invites**
  /echo /faceme -- Tells all players to face you. Useful for door or boss positioning.
  /echo /movetome -- Tells all players to move to your location without using /stick. **Careful! Is not zone-aware. A player that is not in the same zone will try to move to that location, regardless.**
  /echo /stepforward -- Tells all players to walk straight ahead for 3 seconds. Useful for zoning.
  /echo /clickobj or /bclickobj -- Tells all players to click the object in front of them, in the middle of their screen. Will fail if they are looking at the ground.
  /echo /discon -- Will disconnect the player from EQBCServer so they cannot send/receive commands. Useful for focusing a player on a unique task, like healing or dps'ing an offtanked mob.
  /echo /recon -- Will reconnect the player to EQBCServer so that they can send/receive commands.
  /echo /nolisten -- Sets a player to ignore most broadcasted commands. Differs from /discon.
  /echo /listen -- Sets a player to listen to all broadcasted commands. Is normally on by default. Differs from /recon.
  /echo /aoestun -- Tells the enchanter to continuously cast various aoe stun spells. Useful for the Vasella fight in DSK3. Requires the spells to be memmed prior.
  /echo /aoemez -- Tells the enchanter to rotate through nearby mobs, casting mez on them. Useful for the Vasella fight in DSK3.
  /echo /autopeton or /bautopeton -- Sets player to use pets when engaging in combat. On by default.
  /echo /autopetoff or /bautopetoff -- Sets player to not use pets when engaging in combat. Useful for ranged-only fights.
  /echo /spamstake or /bspamstake -- Spams the Vampire Bane Earring until the mob is dead. Can be stopped prematurely with /interrupt. **Ends the macro when this command is run**
  /echo /prenz or /bprenz -- Targets and trades 500pp to Friend of Prenz for access to the Plane of Tactics Zek boss instances.
  /echo /autoposon or /bautoposon -- Enables AutoPosition for a melee character. This will automatically engage them into melee range when in combat. Can disable with /autoposoff.
  /echo /autoposoff or /bautoposoff -- Disables AutoPosition for a melee character. This will no longer automatically engage them into melee range when in combat. Can be enabled with /autoposon.
  /echo /autodiscon or /bautodiscon -- Enables AutoDisc for a tank character. This will automatically manage defensive discs for maximum up-time when in combat. Can disable with /autodiscoff.
  /echo /autodiscoff or /bautodiscoff -- Disables AutoDisc for a tank character. This will no longer automatically manage defensive discs for maximum up-time when in combat. Can be enabled with /autodiscon.
  /varset Action Nothing
/return

Sub Nothing
/return

Sub Stick
  /if (${Arg1}!=${Me.ID}) {
    /echo [${Time.Time24}] Sticking...
    /if (${Spawn[${Arg1}].Distance}<200 && ${LineOfSight[${Me.Y},${Me.X},${Me.Z}:${Spawn[${Arg1}].Y},${Spawn[${Arg1}].X},${Spawn[${Arg1}].Z}]}) {
      /face ID ${Arg1} fast
      /stick ID ${Arg1} 10
    } else {
      /echo [${Time.Time24}] Can't see the stick target!
      /bc I can't see ${Spawn[${Arg1}].CleanName}!
    }
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub LootCorpse
  /echo [${Time.Time24}] Looting my nearby corpses...
  /declare g int local 1
  /declare MaxDistance int local 100
  /for g 1 to ${SpawnCount[${Me.CleanName}'s corps]}
    /if (${ChangeAction}) /return
    /if (${NearestSpawn[${g},${Me.CleanName}'s corps].Distance}<=${MaxDistance} && ${NearestSpawn[${g},${Me.CleanName}'s corps].ID}) {
      /squelch /tar ID ${NearestSpawn[${g},${Me.CleanName}'s corps].ID}
      /delay 3
      /corpse
      /delay 5
      /lootall
      /delay 10
    }
  /next g

  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub SummonCorpses
  /echo [${Time.Time24}] Summoning nearby corpses...
  /consentme
  /delay 10
  /declare g int local 1
  /declare MaxDistance int local 100
  /for g 1 to ${SpawnCount[corps]}
    /if (${ChangeAction}) /return
    /if (${NearestSpawn[${g},corps].Distance}<=${MaxDistance} && ${NearestSpawn[${g},corps].ID}!=NULL) {
      /squelch /tar ID ${NearestSpawn[${g},corps].ID}
      /delay 3
      /corpse
      /delay 1
    }
  /next g
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub RezNear
  /hidecorpse NPC
  /if (!${Defined[TargetingTimer]}) /declare TargetingTimer timer local

  /if (${Defined[DonorGloves]} || ${Defined[RezStick]}) {
    /echo [${Time.Time24}] Rezzing nearby corpses...
    /consentme
    /delay 10
    /declare g int local 1
    /declare MaxDistance int local 100
    /for g 1 to ${SpawnCount[corps]}
      /if (${ChangeAction}) /return
      /if (${NearestSpawn[${g},corps].Distance}<=${MaxDistance} && ${NearestSpawn[${g},corps].ID}!=NULL) {
        /varset TargetingTimer 10
        :RetryTargeting
        /squelch /tar ID ${NearestSpawn[${g},corps].ID}
        /delay 3
        /if (${Target.ID}==${NearestSpawn[${g},corps].ID}) {
          /corpse
          /delay 5
          /if (${Target.Distance}<15) {
            /if (${Defined[DonorGloves]}) {
              /call cast ${DonorGloves} item
            } else /if (${Defined[RezStick]}) {
              /call cast ${RezStick} item
            }
          }
        } else /if (${TargetingTimer}>0) {
          /goto :RetryTargeting
        }
      }
    /next g
  }
  /showcorpse
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub Position
  /if (${Me.Class.Name.Equal[Ranger]}) {
    /face fast
    /stick hold 55 moveback
    /delay 10
    /return
  }
  /if (${Me.Class.Name.Equal[Bard]} || ${Me.Class.Name.Equal[Beastlord]} || ${Me.Class.Name.Equal[Berserker]} || ${Me.Class.Name.Equal[Monk]} || ${Me.Class.Name.Equal[Rogue]}) {
    /declare DistInit int local 18
    /declare DistFinal int local 12
    /declare Direction string local !front
  } else /if (${Me.Class.Name.Equal[Warrior]} || ${Me.Class.Name.Equal[Paladin]} || ${Me.Class.Name.Equal[Shadow Knight]}) {
    /declare DistInit int local 14
    /declare DistFinal int local 6
    /declare Direction string local front
  }
  /if (${Target.Distance}>18 && ${Defined[DistInit]}) {
    /stick ${DistInit} moveback ${Direction}
  } else {
    /stick ${DistFinal} moveback ${Direction}
  }
  /delay 10
/return

Sub Yes
  /notify ConfirmationDialogBox Yes_Button leftmouseup
  /notify LargeDialogWindow LDW_YesButton leftmouseup
  /notify TaskSelectWnd TSEL_AcceptButton leftmouseup
  /notify GiveWnd GVW_Give_Button leftmouseup
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub GHTeleport
/if (${Zone.Name.NotEqual[Guild Hall]} && (${Defined[DonorGHCharm]} || ${Defined[LuckyGHCharm]})) {
  /echo [${Time.Time24}] Clicking my heels three times...
  /if (${Me.Casting.ID}) {
    /interrupt
    /delay 2
  }
  :ClearCursor
   /if (${Cursor.ID}) {
     /autoinventory
     /delay 2
     /goto :ClearCursor
   }
  /echo [${Time.Time24}] Casting Lucky Charm...
  /if (!${Declared[CastAttempts]}) /declare CastAttempts int local 0
    :Retry
    /if (${ChangeAction}) /return
    /varcalc CastAttempts ${CastAttempts}+1
    /if (${Defined[DonorGHCharm]}) {
      /call cast ${DonorGHCharm} item
    } else {
      /call cast ${LuckyGHCharm} item
    }
    /delay 5
    /if (!${Spawn[npc ${Me.CleanName}].ID} && ${CastAttempts}<3) /goto :Retry
    /if (${CastAttempts}==3) {
      /varset CastAttempts 0
      /return
    }
  :TargetingLoop
  /if (!${Defined[TargetAttempts]}) /declare TargetAttempts int local 0
  /squelch /tar npc ${Me.CleanName}
  /delay 5
  /varcalc TargetAttempts ${TargetAttempts}+1
  /if (!${Target.ID} && !${ChangeAction} && ${TargetAttempts}<20) /goto :TargetingLoop
  /hail
  /delay 20
  /if (${Defined[DonorGHCharm]}) {
    /say enter
  } else {
    /notify LargeDialogWindow LDW_YesButton leftmouseup
  }
}
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub GHTeleportTeam
  /if (${Defined[DonorGHCharm]}) {
    /declare n int local 0
    /echo [${Time.Time24}] Sending the whole team to the Guild Hall...
    /for n 1 to ${Team.Size}
      /if (${Spawn[pc ${Team[${n}]}].ID} && ${Team[${n}].NotEqual[${Me.CleanName}]}) {
        /call cast ${DonorGHCharm} item
        /delay 3
        /bct ${Team[${n}]} //squelch /tar npc ${Me.CleanName}`s
        /delay 2
        /bct ${Team[${n}]} //multiline ; /face fast;/say enter
      }
    /next n
    /delay 10
    /call cast ${DonorGHCharm} item
    /delay 3
    /squelch /tar npc ${Me.CleanName}`s
    /delay 2
    /say enter
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub HOHTeleport
  /if (${Defined[HOHPortalFrag]}) {
    /echo [${Time.Time24}] Gating to Halls of Honor.
    /call cast ${HOHPortalFrag} item
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub ValeTeleport
  /if (${Defined[ValeToken]}) {
    /echo [${Time.Time24}] Gating to The Hidden Vale.
    /call cast ${ValeToken} item
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub ForestTeleport
  /if (${Defined[ForestCharm]}) {
    /echo [${Time.Time24}] Gating to The Hidden Forest.
    /call cast ${ForestCharm} item
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub LootNear
  /echo [${Time.Time24}] Looting nearby enemies...
  :LootLoop
  /if (${NearestSpawn[corpse].Distance}<=60 && ${NearestSpawn[corpse].ID} != NULL) {
    /squelch /tar ID ${NearestSpawn[corpse].ID}
    /delay 3
    /if (${Target.Distance} > 25) {
    /stick hold 6
    }
    /lootall
    /delay 5
    /goto :LootLoop
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub LootWhore
  /declare g int local
  /declare h int local
  /declare corpses int local ${SpawnCount[corpse]}
  /declare items int local
  /declare MaxDistance int local 100
  /declare Unlootable int local 0
  /declare TryTargeting int local 0
  /declare LootGenerate int local 0

  /echo Looting nearby enemies...

  :LWNextCorpse
  /if (${corpses}>0) {
    /for g 1 to ${SpawnCount[corpse]}
      /if (${ChangeAction}) /return
      /if (${NearestSpawn[${g},corps].Distance}<=${MaxDistance} && ${NearestSpawn[${g},corps].ID}!=NULL && ${NearestSpawn[${g},corps].Guild.Length}<1) {
|-- Target Corpse --|
        :LWGetTarget
        /squelch /tar ID ${NearestSpawn[${g},corps].ID}
        /delay 1
        /if (!${Target.ID} || ${Target.ID}!=${NearestSpawn[${g},corps].ID}) {
          /varcalc TryTargeting ${TryTargeting}+1
          /if (${TryTargeting}>15) {
            /varset TryTargeting 0
            /goto :LWNextCorpse
          }
          /goto :LWGetTarget
        } else {
|-- Move to Corpse --|
          /face fast
          :LWGetCloser
          /if (${Target.Distance}>11) {
            /moveto loc ${Target.Y} ${Target.X}
            /delay 2
            /goto :LWGetCloser
          }
|-- Open Corpse Loot Window --|
          :LWOpenLoot
          /if (${Target.ID}) {
            /loot
          } else {
            /goto :LWNextCorpse
          }
          /delay 2
          /if (!${Corpse.Open}) {
            /delay 1
            /goto :LWOpenLoot
          } else {
|-- Check for Items --|
            :LWLootGenerate
            /if (!${Corpse.Items}) {
              /delay 2
              /varcalc LootGenerate ${LootGenerate}+1
              /if (${LootGenerate}<10) {
                /goto :LWLootGenerate
              } else {
                /varset LootGenerate 0
                /goto :LWCloseLoot
              }
            } else {
              /if (${Corpse.Items}>0) {
|-- Loot Items --|
                /varset items ${Corpse.Items}
                /for h 1 to ${items}
                :LWCursorGenerate
                /if (${Corpse.Item[${h}].Stackable} && !${Corpse.Item[${h}].NoDrop}) /itemnotify loot${h} leftmouseup
                /delay 2
                /if (${Corpse.Item[${h}].Stackable} && !${Corpse.Item[${h}].NoDrop} && !${Cursor.ID}) {
                  /goto :LWCursorGenerate
                } else {
                  :LWClearCursor
                  /if (${Cursor.NoDrop} || !${Cursor.Stackable}) {
                    /destroy
                  } else {
                    /autoinv
                  }
                  /delay 1
                  /if (${Cursor.ID}) /goto :LWClearCursor
                }
                /next h
              }
            }
          }
        }
      } else {
        /varcalc Unlootable ${Unlootable}+1
      }
|-- Close Corpse Loot Window --|
      :LWCloseLoot
      /keypress esc
      /if (${Corpse} && ${Corpse.Open}) {
        /delay 1
        /goto :LWCloseLoot
      }
      :LWStandingCheck
      /if (!${Me.Standing}) {
        /stand
        /delay 1
      }
    /next g
  }
  /if (${NearestSpawn[corpse].Distance}<=${MaxDistance} && (${Unlootable}<${SpawnCount[corpse]})) {
    /goto :LWNextCorpse
  } else {
    /varset ChangeAction TRUE
    /varset Action Nothing
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub COHTar
  /if (${Me.Gem[Call of the Hero]}>0) {
    /echo [${Time.Time24}] Summoning ${Target.CleanName} from ${Target.Distance3D} units away.
    /call WaitForSpellReady "Call of the Hero"
    /call cast "Call of the Hero"
  } else /if (${FindItemCount[Arion, the Skull of the Ancient]}) {
    /echo [${Time.Time24}] Summoning ${Target.CleanName} from ${Target.Distance3D} units away.
    /call cast "Arion, the Skull of the Ancient" item
  } else /if (${FindItemCount[Orb of the Crimson Bull]}) {
    /echo [${Time.Time24}] Summoning ${Target.CleanName} from ${Target.Distance3D} units away.
    /call cast "Orb of the Crimson Bull" item
  }
  /if (${Action.Equal[COHTar]}) {
    /varset ChangeAction TRUE
    /varset Action Nothing
  }
/return ${Macro.Return}

Sub COH
  /delay 5
| build an array of all players who meet the criteria and are X distance away
| find random int
| summon array element using random int
| rebuild array. rinse and repeat.
  /if (${Me.Gem[Call of the Hero]}==0 && ${FindItemCount[Arion, the Skull of the Ancient]}==0 && ${FindItemCount[Orb of the Crimson Bull]}==0) {
    /varset ChangeAction TRUE
    /varset Action Nothing
    /varset Arg2
    /return
  }
  /if (!${Defined[j]}) /declare j int local 1
  /if (!${Defined[k]}) /declare k int local 0
  /if (!${Defined[Beginning]}) /declare Beginning int local 1
  /if (!${Defined[End]}) /declare End int local
  /if (!${Defined[Prefix]}) /declare Prefix string local
  /if (!${Defined[Suffix]}) /declare Suffix string local .Name
  /if (!${Defined[COHItem]}) /declare COHItem string local
  /if (!${Defined[COHRetryCount]}) /declare COHRetryCount int local 0
  /if (!${Defined[SummonTar]}) /declare SummonTar int local 0
  /if (${Arg2.Equal[Team]}) {
    /varset End ${Team.Size}
    /varset Prefix Team
    /varset Suffix
  } else /if (${Raid.Members}>0) {
    /varset End ${Raid.Members}
    /varset Prefix Raid.Member
  } else /if (${Group}>0) {
    /varset Beginning 0
    /varset End ${Group}
    /varset Prefix Group.Member
  }
  
  :COHLoop
  /if (${Defined[TempTargetArray]}) {
    /deletevar TempTargetArray
  }
  /if (${Defined[TargetArray]}) {
    /deletevar TargetArray
  }

  /varset k 0
  /declare TempTargetArray[${End}] int local UNDEFINED-ARRAY-ELEMENT

  /for j ${Beginning} to ${End}
    /if (${Spawn[=${${Prefix}[${j}]}].ID} && (${Spawn[=${${Prefix}[${j}]}].Distance3D}>50 || !${Spawn[=${${Prefix}[${j}]}].LineOfSight})) {
      /varcalc k ${k}+1
      /varset TempTargetArray[${k}] ${Spawn[=${${Prefix}[${j}]}].ID}
    }
  /next j

  /if (${k}>0 && ${Action.Equal[COH]} && !${ChangeAction}) {

    /declare TargetArray[${k}] int local UNDEFINED-ARRAY-ELEMENT
    /varset k 0
    
    /for j 1 to ${TempTargetArray.Size}
      /if (${TempTargetArray[${j}]}>0) {
        /varcalc k ${k}+1
        /varset TargetArray[${k}] ${TempTargetArray[${j}]}
      }
    /next j

    /if (${Defined[TargetArray]}) {
        /varset SummonTar ${TargetArray[${Math.Calc[${Math.Rand[${Math.Calc[${TargetArray.Size}-1]}]}+1]}]}
        /tar ID ${SummonTar}
        /delay 3
        /call COHTar
        /delay 15
        /if (${Macro.Return.NotEqual[CAST_INTERRUPTED]} && ${Action.Equal[COH]} && !${ChangeAction} && ${Target.ID}==${SummonTar} && ${Target.Distance}<15) /bct ${Spawn[id ${SummonTar}].Name} //multiline ; /stick end;/varset Arg2 ${Arg2};/varset Command COH;/varset ChangeAction TRUE
      /if (${Action.Equal[COH]} && !${ChangeAction}) {
        /next j
      }
    }
    /if (${Action.Equal[COH]} && !${ChangeAction}) {
      /goto :COHLoop
    }
  }

  /varset Action Nothing
  /if (!${ChangeAction}) {
    /varset ChangeAction TRUE
    /varset Arg2
    /varset Command
  }
  /echo [${Time.Time24}] All done summoning.
/return

Sub BlockBuff(string BuffName, string BuffHolder)
  /declare BuffSlot int local
  /declare BuffWnd string local
  /if (${BuffHolder.Equal[Pet]} && ${Me.Pet.ID} && ${Me.PetBuff[${BuffName}]}) {
    /echo [${Time.Time24}] Removing ${BuffName} from pet...
    /varcalc BuffSlot ${Me.PetBuff[${BuffName}]}-1
    /varset BuffWnd PIW_PetBuff${BuffSlot}_Button
    /notify PIW_BuffWindow ${BuffWnd} leftmouseup
  } else /if (${BuffHolder.Equal[Me]} && ${Me.Buff[${BuffName}].ID}) {
    /echo [${Time.Time24}] Removing ${BuffName} from self...
    /varcalc BuffSlot ${Me.Buff[${BuffName}].ID}-1
    /notify BuffWindow BW_Buff${BuffSlot}_Button leftmouseup
  }
/return

Sub ZoneToChaos
  /declare OrigMask int local ${Me.Inventory[3].ID}
  /declare MastersMask int local
  /declare TryToZoneTimer timer local

  /if (${FindItemCount[Mask of the Masters]}>0) {
    /varset MastersMask ${FindItem[Mask of the Masters].ID}
  } else /if (${FindItemCount[Guise of the Masters]}>0) {
    /varset MastersMask ${FindItem[Guise of the Masters].ID}
  } else {
    /return
  }

  /if (${Zone.Name.Equal[Halls of Honor]} && ${LineOfSight[${Me.Y},${Me.X},${Me.Z}:3,108,4]}) {
    /if (${Me.Casting.ID}) {
      /interrupt
      /delay 2
    }
    /echo [${Time.Time24}] Equipping ${MastersMask}.
    /exchange ${MastersMask} 3
      /delay 2
    /moveto loc 3 108
    /varset TryToZoneTimer 100
    :WaitForZone
    /delay 2
    /if (${Zone.Name.Equal[Temple of Marr]} || ${TryToZoneTimer}==0) {
      /exchange ${OrigMask} 3
      /if (${TryToZoneTimer}==0) /echo [${Time.Time24}] The event appears to be on time out. Original mask is now being worn.
    } else {
      /goto :WaitForZone
    }
  } else {
    /echo [${Time.Time24}] already in Temple of Marr.
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub Settings
  /echo [${Time.Time24}] Checking settings...
  /if (${Me.Class.Name.Equal[Cleric]} || ${Me.Class.Name.Equal[Druid]} || ${Me.Class.Name.Equal[Shaman]}) {
    /varset ClassType Healer
  } else /if (${Me.Class.Name.Equal[Necromancer]} || ${Me.Class.Name.Equal[Magician]} || ${Me.Class.Name.Equal[Enchanter]} || ${Me.Class.Name.Equal[Wizard]}) {
    /varset ClassType Ranged
  } else {
    /varset ClassType Melee
  }
  /if (${Me.Class.Name.Equal[Cleric]} || ${Me.Class.Name.Equal[Druid]} || ${Me.Class.Name.Equal[Shaman]} || ${Me.Class.Name.Equal[Enchanter]} || ${Me.Class.Name.Equal[Magician]} || ${Me.Class.Name.Equal[Ranger]}) {
    /tgb on
  } else {
    /tgb off
  }
  /if (${Me.Pet.ID}) {
    /pet focus on
    /pet no taunt
    /pet hold
  }
  /melee off
  /hidecorpse looted
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub DetectGems
  /if (!${Defined[SpellSet]}) /declare SpellSet string outer Group
  /declare SpellsMemmed bool local FALSE
  :DetectGems
  /for j 1 to 9
    /if (!${Defined[Gem${j}]}) /declare Gem${j} bool outer FALSE 
    /if (${Me.Gem[${j}].ID}) {
      /varset Gem${j} TRUE
      /varset SpellsMemmed TRUE
    }
  /next j
  /if (!${SpellsMemmed}) {
    /echo [${Time.Time24}] Memming spells
    /memspellset ${SpellSet}
    /delay 5
    :WaitForMem
    /if (${Window[SpellBookWnd].Open}) {
      /delay 1
      /goto :WaitForMem
    }
    /goto :DetectGems
  }
/return

Sub Hold
  /if (${Action.NotEqual[Killnear]}) {
    /echo [${Time.Time24}] Holding...
    /if (${Me.Pet.ID} && !${ChangeAction} && (${Spawn[${RaidTarg}].ID} && ${Spawn[${RaidTarg}].Type.Equal[NPC]})) /pet hold
    /if (${Me.Class.Name.NotEqual[Bard]} && ${Me.Casting.ID}) {
      /interrupt
    }
    /if (${Me.Combat}) /attack off
    /if (${Me.AutoFire}) /autofire

    /varset RaidTarg
    /varset ChangeAction TRUE
    /varset Action Nothing
  }
/return

#Event WhoHas "#1# #*#'who has #2#"
#Event WhoIsMissing "#1# #*#'who is missing #2#"

#Event ManualWhoHas "#1# #*#'nolink who has #2#"
#Event ManualWhoIsMissing "#1# #*#'nolink who is missing #2#"

Sub Event_WhoHas
  /declare CleanedLink string local ${Param2.Right[-51].Left[-2]}
  /if (${FindItemCount[${CleanedLink}]}>0 || ${FindItemBankCount[${CleanedLink}]}>0) {
    /echo [${Time.Time24}] I have ${Param2.Left[-1]}. ${FindItemCount[${CleanedLink}]} on me. ${FindItemBankCount[${CleanedLink}]} in the bank.
    /bc I have ${Param2.Left[-1]}. ${FindItemCount[${CleanedLink}]} on me. ${FindItemBankCount[${CleanedLink}]} in the bank.
  } else {
    /echo [${Time.Time24}] Missing ${CleanedLink}.
  }
/return

Sub Event_WhoIsMissing
  /declare CleanedLink string local ${Param2.Right[-51].Left[-2]}
  /if (${FindItemCount[${CleanedLink}]}==0 && ${FindItemBankCount[${CleanedLink}]}==0) {
    /echo [${Time.Time24}] I have ${Param2.Left[-1]}. ${FindItemCount[${CleanedLink}]} on me. ${FindItemBankCount[${CleanedLink}]} in the bank.
    /bc I am missing ${Param2.Left[-1]}
  }
/return

Sub Event_ManualWhoHas
  /declare CleanedName string local ${Param2.Left[-1]}
  /if (${FindItemCount[${CleanedName}]}>0 || ${FindItemBankCount[${CleanedName}]}>0) {
    /echo [${Time.Time24}] I have ${CleanedName}. ${FindItemCount[${CleanedName}]} on me. ${FindItemBankCount[${CleanedName}]} in the bank.
    /bc I have ${CleanedName}. ${FindItemCount[${CleanedName}]} on me. ${FindItemBankCount[${CleanedName}]} in the bank.
  } else { /echo [${Time.Time24}] Missing ${CleanedName}.
  }
/return

Sub Event_ManualWhoIsMissing
  /declare CleanedName string local ${Param2.Left[-1]}
  /if (${FindItemCount[${CleanedName}]}==0 && ${FindItemBankCount[${CleanedName}]}==0) {
    /echo [${Time.Time24}] I have ${CleanedName}. ${FindItemCount[${CleanedName}]} on me. ${FindItemBankCount[${CleanedName}]} in the bank.
    /bc I am missing ${CleanedName}
  }
/return

Sub Near
  /if (!${Spawn[${Arg1}].ID} || ${Spawn[${Arg1}].Distance3D}>100) {
    /bc I'm missing! Currently in ${Zone}.
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub HealMe
  /if (${Me.Class.Name.Equal[Cleric]} || ${Me.Class.Name.Equal[Druid]} || ${Me.Class.Name.Equal[Shaman]}) {
    /if (${Arg2.Length}>0) {
      /varset HealTarg ${Arg2}
      /squelch /tar ID ${HealTarg}
      /delay 3
      /varset Arg2
    }
    /call Combat
    /call CheckLevels
    /call CheckStatus
    /doevents
  }
/return

Sub CheckHP
  /if (${Target.PctHPs}>=90) /call Interrupt
/return

Sub BalExp
|--Exp Levels----------------------------------------------------------------
  /if (${Me.PctExp}<100) {
    /if (${Window[AAWindow].Child[AAW_PercentCount].Text.Length}==4) {
      /alternateadv on 50
    }
  } else {
    /if (${Window[AAWindow].Child[AAW_PercentCount].Text.Length}<4) {
      /alternateadv on 100
    }
  }
  /delay 10
  /varset ExpCheck ${Math.Calc[${Math.Rand[100]}+300+${Me.Class.ID}]}
/return

Sub PetWeapons
/if (${Me.Class.Name.NotEqual[Magician]} && !${Defined[PetToyBelt]}) /return
  /declare Bag int local
  /declare Slot int local
  /declare BreakLoop int local 0
  /declare PetOwner string local ${Target.CleanName}
  /varset Action Nothing

|----Detect Spells---------------------------------------------------

/if (${Me.Gem[Summon: Ornaments of the Gods Rk. I]}>0 || (${Me.Class.Name.NotEqual[Magician]} && ${Defined[PetToyBelt]})) {
  /declare PetKitSpell string local "Summon: Ornaments of the Gods Rk. I"
  /declare PetWep string local "Summoned: Godly Mace"
  /declare PetDag string local "Summoned: Godly Dagger"
  /declare PetSwo string local "Summoned: Godly Blade"
}

/if (${Me.Gem[Summon: Ornaments of the Gods Rk. II]}>0) {
  /declare PetKitSpell string local "Summon: Ornaments of the Gods Rk. II"
  /declare PetWep string local "Summoned: Godly Mace of Deceit"
  /declare PetDag string local "Summoned: Godly Dagger of Deceit"
  /declare PetSwo string local "Summoned: Godly Blade of Deceit"
}

/if (${Me.Gem[Summon: Ornaments of the Gods Rk. III]}>0) {
  /declare PetKitSpell string local "Summon: Ornaments of the Gods Rk. III"
  /declare PetWep string local "Summoned: Godly Mace of Destruction"
  /declare PetDag string local "Summoned: Godly Dagger of Destruction"
  /declare PetSwo string local "Summoned: Godly Blade of Destruction"
}

  /declare PetArmor1 string local "Summoned: Godly Muzzle"
  /declare PetArmor2 string local "Summoned: Godly Belt"
  /declare PetArmor3 string local "Godly Breastplate"
  /declare PetArmor4 string local "Godly Greaves"
  /declare PetArmor5 string local "Godly Helm"
  /declare PetArmor6 string local "Godly Vambraces"

  |-------------------------------------------------
  /echo [${Time.Time24}] Summoning pet weapons for ${Target.CleanName}'s pet.
  /squelch /tar ID ${Target.Pet.ID}
  /if (${Target.Distance}>100) {
    /echo [${Time.Time24}] Target is too far away!
    /return
  }
  /if (!${Spawn[pc ${PetOwner}].Pet.ID}) {
    /echo [${Time.Time24}] Owner doesn't have a pet!
    /return
  }

  /face fast nolook
  /stick on 6
  :WaitForProximity
  /delay 1
  /if (${Target.Distance}>12) /goto :WaitForProximity
  /stick end

  |--------------------------------------------------
  |-- Deck out target's pet
  |--------------------------------------------------

  :SummonToys
  /if (${Me.Class.Name.NotEqual[Magician]}) {
    /call cast ${PetToyBelt} item
  } else {
    /call WaitForSpellReady ${PetKitSpell}
    /call cast ${PetKitSpell}
    /if (${Macro.Return.Equal[CAST_INTERRUPTED]} || ${Macro.Return.Equal[CAST_FIZZLE]}) /goto :SummonToys
  }

  |-- Catch twin casts --
  :PlaceBag
  /autoinv
  /delay 3
  /if (${Cursor.Name.NotEqual[Phantom Satchel]}) /return
  /if (${Cursor.ID}) /goto :PlaceBag

  |-- Proceed only when the kit is confirmed in the inventory
  /if (${FindItemCount[Phantom Satchel]}>0) {
    /if (!${Window[InventoryWindow].Open}) /keypress Inventory
    /varset Bag ${FindItem[${PetDag}].InvSlot.Pack}
    /itemnotify ${InvSlot[${Bag}]} rightmouseup
    /delay 3

    /varset Slot ${FindItem[${PetDag}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1

    /varset BreakLoop 0
    :OpenGiveWindowA1
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA1
    }
    /delay 1s ${Window[GiveWnd].Open}
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA1
    }

    /varset BreakLoop 0
    :OpenGiveWindowA2
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /varset Slot ${FindItem[${PetSwo}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA2
    }
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA2
    }

    /varset BreakLoop 0
    :OpenGiveWindowA3
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /varset Slot ${FindItem[${PetArmor1}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA3
    }
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA3
    }

    /varset BreakLoop 0
    :OpenGiveWindowA4
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /varset Slot ${FindItem[${PetArmor2}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA4
    }
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowA4
    }

    /notify GiveWnd GVW_Give_Button leftmouseup
    /delay 5

    /varset Slot ${FindItem[${PetArmor3}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1

    /varset BreakLoop 0
    :OpenGiveWindowB1
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB1
    }
    /delay 1s ${Window[GiveWnd].Open}
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB1
    }

    /varset BreakLoop 0
    :OpenGiveWindowB2
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /varset Slot ${FindItem[${PetArmor4}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB2
    }
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB2
    }

    /varset BreakLoop 0
    :OpenGiveWindowB3
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /varset Slot ${FindItem[${PetArmor5}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB3
    }
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB3
    }

    /varset BreakLoop 0
    :OpenGiveWindowB4
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /varset Slot ${FindItem[${PetArmor6}].InvSlot}
    /itemnotify ${InvSlot[${Slot}]} leftmouseup
    /delay 1
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
    } else {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB4
    }
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowB4
    }

    /notify GiveWnd GVW_Give_Button leftmouseup
    /delay 1

    /varset BreakLoop 0
    :DestroyPetBag
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /varset Bag ${FindItem[${PetWep}].InvSlot.Pack}
    /itemnotify ${InvSlot[${Bag}]} leftmouseup
    /echo [${Time.Time24}] ${Target.CleanName} is now at ${Target.PctHPs} percent health.
    /echo [${Time.Time24}] ${PetOwner}'s pet is now fully equipped.
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /destroy
    } else {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :DestroyPetBag
    }

   /echo [${Time.Time24}] Closing inventory.
   /keypress esc
   } else {
   /bc Full inventory, yo!
   }
  /varset ChangeAction TRUE
/return

Sub RZPetWeapons
  /declare Bag int local
  /declare Slot int local
  /declare BreakLoop int local 0
  /declare PetOwner string local ${Target.CleanName}
  /varset Action Nothing

|----Detect Spells---------------------------------------------------

/if (${Me.Gem[Summon: Staff of War]}>0) {
  /declare PetKitSpell string local "Summon: Staff of War"
  /declare PetWep string local "Summoned: Staff of War"
}

  |-------------------------------------------------
  /echo [${Time.Time24}] Summoning Rallos Zek pet weapons for ${Target.CleanName}'s pet.
  /squelch /tar ID ${Target.Pet.ID}
  /if (${Target.Distance}>100) {
    /echo [${Time.Time24}] Target is too far away!
    /return
  }
  /if (!${Spawn[pc ${PetOwner}].Pet.ID}) {
    /echo [${Time.Time24}] Owner doesn't have a pet!
    /return
  }

  /face fast nolook
  /stick on 6
  :WaitForProximity
  /delay 1
  /if (${Target.Distance}>12) /goto :WaitForProximity
  /stick end

  |--------------------------------------------------
  |-- Deck out target's pet
  |--------------------------------------------------

  :SummonToys
    /call WaitForSpellReady ${PetKitSpell}
    /call cast ${PetKitSpell}
    /if (${Macro.Return.Equal[CAST_INTERRUPTED]} || ${Macro.Return.Equal[CAST_FIZZLE]}) /goto :SummonToys
    /delay 5


  |-- Proceed only when the kit is confirmed in the inventory
    :OpenGiveWindowRZ
    /if (${BreakLoop} > 9) {
      /echo [${Time.Time24}] Macro got stuck. Breaking PetWeap loop.
      /return
    }
    /if (${Cursor.ID} && ${Cursor.NoRent}) {
      /echo [${Time.Time24}] Giving (${Cursor.Name}) to (${Target.CleanName}).
      /nomodkey /click left target
      /delay 5
      /goto :OpenGiveWindowRZ
    } else /if (${Cursor.ID} && !${Cursor.NoRent}) {
      /autoinv
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowRZ
    }
    /delay 1s ${Window[GiveWnd].Open}
    /if (!${Window[GiveWnd].Open}) {
      /varcalc BreakLoop ${BreakLoop}+1
      /goto :OpenGiveWindowRZ
    }

    /delay 3
    /notify GiveWnd GVW_Give_Button leftmouseup
    /delay 1

    /echo [${Time.Time24}] Closing inventory.
    /keypress esc

  /varset ChangeAction TRUE
/return

Sub Killnear
  /if (!${Defined[j]}) /declare j int local 1

  /if (${Command.Length}>0) {
    /echo [${Time.Time24}] Received a new command.
    /call Hold
    /return
  }
  /if (${Action.Equal[Killnear]} && ${SpawnCount[npc radius 60 zRadius 20 targetable]}>0) {
    /if (!${Spawn[id ${RaidTarg}].ID} || ${Spawn[id ${RaidTarg}].Type.Equal[Corpse]} || !${Target.ID}) {
      /for j 1 to ${SpawnCount[npc radius 60 zRadius 20 targetable]}
        /if (${Me.NearestSpawn[${j},npc radius 60 zRadius 20 targetable].LineOfSight}) {
          /varset RaidTarg ${Me.NearestSpawn[${j},npc radius 60 zRadius 20 targetable].ID}
          /squelch /tar ID ${RaidTarg}
          /delay 3
          /if (${Me.Pet.ID} && ${AutoPet}) /pet attack
          /varset NewTarget TRUE
        } else {
          /next j
        }
    }
    /call Combat
  } else {
    /echo [${Time.Time24}] Nearest spawn is ${NearestSpawn[NPC targetable].Distance3D} away.
    /varset Action Hold
    /call Hold
  }
/return

Sub CheckBoss
  /if (${Spawn[npc Lord Draekon].ID}) {
    /if (!${Defined[Draekon]}) {
      /declare Draekon int outer ${Spawn[npc Lord Draekon].ID}
    }
  } else /if (${Defined[Draekon]}) {
    /deletevar Draekon
  }
  /if (${Spawn[npc The Chaos].ID}) {
    /if (!${Defined[Chaos]}) {
      /declare Chaos int outer ${Spawn[npc The Chaos].ID}
    }
  } else /if (${Defined[Chaos]}) {
    /deletevar Chaos
  }
  /if (${Spawn[npc Zenurix].ID}) {
    /if (!${Defined[Zenurix]}) {
      /declare Zenurix int outer ${Spawn[npc Zenurix].ID}
    }
  } else /if (${Defined[Zenurix]}) {
    /deletevar Zenurix
  }
  /if (${Spawn[npc Warlord Rallos Zek].ID} || (${Spawn[npc Most Angry].ID} && ${RaidTarg}==${Spawn[npc Most Angry].ID})) {
    /if (!${Defined[RallosZek]} && ${Spawn[npc Most Angry].ID}) {
      /declare RallosZek int outer ${Spawn[npc Most Angry].ID}
    }
    /if (!${Defined[RallosZek]} && ${Spawn[npc Warlord Rallos Zek].ID}) {
      /declare RallosZek int outer ${Spawn[npc Warlord Rallos Zek].ID}
    }
  } else /if (${Defined[RallosZek]}) {
    /deletevar RallosZek
  }
  /if (${Spawn[npc Emperor Seravince].ID}) {
    /if (!${Defined[Seravince]}) {
      /declare Seravince int outer ${Spawn[npc Emperor Seravince].ID}
    }
  } else /if (${Defined[Seravince]}) {
    /deletevar Seravince
  }
  /if (${Spawn[npc Vasella Fireblood].ID}) {
    /if (!${Defined[Vasella]}) {
      /declare Vasella int outer ${Spawn[npc Vasella Fireblood].ID}
    }
  } else /if (${Defined[Vasella]}) {
    /deletevar Vasella
  }
  /if (${Spawn[npc Master Vule].ID} && ${RaidTarg}==${Spawn[npc Master Vule].ID}) {
    /if (!${Defined[Vule]}) {
      /declare Vule int outer ${Spawn[npc Master Vule].ID}
    }
  } else /if (${Defined[Vule]}) {
    /deletevar Vule
  }
  /if (${Spawn[npc Kerani, The Egg Keeper].ID}) {
    /if (!${Defined[Kerani]}) {
      /declare Kerani int outer ${Spawn[npc Kerani, The Egg Keeper].ID}
    }
  } else /if (${Defined[Kerani]}) {
    /deletevar Kerani
  }
  /if (${Spawn[npc Xeru The Arbiter of Mayong].ID}) {
    /if (!${Defined[Xeru]}) {
      /declare Xeru int outer ${Spawn[npc Xeru The Arbiter of Mayong].ID}
    }
  } else /if (${Defined[Xeru]}) {
    /deletevar Xeru
  }
  /if (${Spawn[npc Zurixk The Caretaker].ID}) {
    /if (!${Defined[XeruCaretaker]}) {
      /declare XeruCaretaker int outer ${Spawn[npc Zurixk The Caretaker].ID}
    }
  } else /if (${Defined[XeruCaretaker]}) {
    /deletevar XeruCaretaker
  }
/return

Sub FormGroups
  /if (!${Defined[j]}) /declare j int local 1
  /if (!${Defined[k]}) /declare k int local 1
  /for j 1 to ${GroupLead.Size}
    /for k ${Math.Calc[${j}*6-5]} to ${Math.Calc[${j}*6]}
      /bct ${GroupLead[${j}]} //invite ${Team[${k}]}
    /next k
  /next j
  /echo Group invites sent.
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub FormRaid
  /if (!${Defined[j]}) /declare j int local 1
  /if (!${Group}) {
    /call FormGroups
    /delay 20
  }
  /for j 1 to ${GroupLead.Size}
    /raidinvite ${GroupLead[${j}]}
  /next j
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub BuffTarget
  /if (${Spawn[id ${RaidTarg}].Distance} < 120 && ${Spawn[id ${RaidTarg}].LineOfSight}) {
    /squelch /tar ID ${RaidTarg}
    /if (${Me.Class.Name.Equal[Shaman]}) {
      /if (${Arg2.Equal[ShortBuff]}) {
        /echo Casting ${GladiatorBuff}
        /call WaitForSpellReady ${GladiatorBuff}
        /call cast ${GladiatorBuff}
        /echo Casting ${LionBuff}
        /call WaitForSpellReady ${LionBuff}
        /call cast ${LionBuff}
      } else {
        /echo Casting ${FocusBuff}
        /call WaitForSpellReady ${FocusBuff}
        /call cast ${FocusBuff}
        /echo Casting ${DonorWeapon10}
        /call cast ${DonorWeapon10} item
      }
    } else /if (${Me.Class.Name.Equal[Cleric]}) {
      /if (${Arg2.Equal[ShortBuff]}) {

      } else {
        /echo Casting ${TempBuff}
        /call WaitForSpellReady ${TempBuff}
        /call cast ${TempBuff}
        /echo Casting ${SpellHasteBuff}
        /call WaitForSpellReady ${SpellHasteBuff}
        /call cast ${SpellHasteBuff}
      }
    } else /if (${Me.Class.Name.Equal[Druid]}) {
      /if (${Arg2.Equal[ShortBuff]}) {
        /echo Casting ${MoonBuff}
        /call WaitForSpellReady ${MoonBuff}
        /call cast ${MoonBuff}
      } else {
        /echo Casting ${NeedleBuff}
        /call WaitForSpellReady ${NeedleBuff}
        /call cast ${NeedleBuff}
      }
    } else /if (${Me.Class.Name.Equal[Enchanter]}) {
      /if (${Arg2.Equal[ShortBuff]}) {
        /echo Casting ${InfernoBuff}
        /call WaitForSpellReady ${InfernoBuff}
        /call cast ${InfernoBuff}
      } else {
        /echo Casting ${ManaBuff}
        /call WaitForSpellReady ${ManaBuff}
        /call cast ${ManaBuff}
      }
    }
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
  /varset RaidTarg
  /varset Arg2
/return

Sub ClickObject
  /echo [${Time.Time24}] Attempting to click the object in front of me.
  /declare CameraChange int local 0
  /declare StartX int local ${Me.X}
  /declare StartY int local ${Me.Y}
  /declare StartZ int local ${Me.Z}

  /for CameraChange 1 to 6
    /keypress f9
    /delay 1
  /next CameraChange
  /declare TryTimer timer local 100
  /declare CenterLook int local ${Me.Heading.DegreesCCW}
  /declare LeftLimit int local 0
  /declare RightLimit int local 0
  /declare TempLook int local 0
  /varcalc LeftLimit ${Me.Heading.DegreesCCW}+12
  /varcalc RightLimit ${Me.Heading.DegreesCCW}-12
  /varcalc TempLook ${LeftLimit}
  /echo [${Time.Time24}] Left: ${LeftLimit}, Center: ${CenterLook}, Right: ${RightLimit}
  /look 0
  /face fast heading ${TempLook}
  /delay 2
  :ClickObjectLoop
  /if (${TryTimer}>0 && !${ChangeAction}) {
    /keypress u
    /if (${Me.Heading.DegreesCCW}>${RightLimit}) {
      /varcalc TempLook ${TempLook}-2
    } else {
      /varcalc TempLook ${LeftLimit}
    }
    /face fast heading ${TempLook}
    /delay 1
    /if (${Math.Distance[${StartY},${StartX},${StartZ}]} > 5) /varset ChangeAction TRUE
    /goto :ClickObjectLoop
  }
  /varset ChangeAction TRUE
  /varset Action Nothing
/return

|----Zoning--------------------------------------------------------------------
#Event Zoned "#*#You have entered #*#"

Sub Event_Zoned
  /varset ZoneChange TRUE
/return

Sub ZoneChange
  /echo [${Time.Time24}] Finished zoning... checking buffs and spells.
  /delay 10
  /moveto off
  /stick end
  /delay 40
  /varset ChangeAction TRUE
  /varset Action Idle
  /varset Listening TRUE
  /call CheckBoss
  /if (${Me.Class.Name.NotEqual[Berserker]} && ${Me.Class.Name.NotEqual[Monk]} && ${Me.Class.Name.NotEqual[Rogue]} && ${Me.Class.Name.NotEqual[Warrior]}) {
    /call CheckGems
    /if (${Me.Class.Name.Equal[Beastlord]} || ${Me.Class.Name.Equal[Druid]} || ${Me.Class.Name.Equal[Enchanter]} || ${Me.Class.Name.Equal[Magician]} || ${Me.Class.Name.Equal[Necromancer]} || ${Me.Class.Name.Equal[Shaman]}) {
|      /call Pet
    }
  }
  /call CheckLevels
  /call Settings
  /varset ZoneChange FALSE
  /varset LastZone ${Zone.ID}
/return

|----Pet Bane Weapon Check-------------------------------------
#Event PetBaneWeap "#*# tries to hit #*# is INVULNERABLE!#*#"

Sub Event_PetBaneWeap
  /if (${PetBaneWeap}==0) {
    /bc [${Time.Time24}] My pet can't hurt this boss! Check bane weapons.
    /varset PetBaneWeap 300
  }
/return

|----Reaper------------------------------------------------------------
#Event ReaperDuck "#*#You feel the Reapers grasp#*#"

SUB Event_ReaperDuck(string Line)
  /echo [${Time.Time24}] Ducking the Reaper's grasp!
  /if (!${Me.Ducking}) /keypress duck
  /delay 50
/return

#Event ReaperStand "#*#You evade the Reapers grasp#*#"

SUB Event_ReaperStand(string Line)
  /echo [${Time.Time24}] Standing.
  /if (${Me.Ducking}) /stand
/return

|----Vistrinda----------------------------------------------------------
#Event Vistrinda "#*#Vistrinda looks around and sets her gaze upon |${Me}|#*#"

SUB Event_Vistrinda(string Line)
  /echo [${Time.Time24}] Banishing adds ~ Using Vistrinda's Scale.
  /squelch /tar ID ${Spawn[npc Vistrinda].ID}
  /delay 2
  /if (${Defined[VistrindaScale]}) /call cast ${VistrindaScale} item
/return

|----Draekon------------------------------------------------------------
#Event DraekonAway "#*#You hear the voice of #2# #*#"

SUB Event_DraekonAway(string Line)
  /echo [${Time.Time24}] Hightailing it!
  /interrupt
  /delay 1
  /stick ID ${Spawn[npc ${Param2}].ID} 6
  /echo [${Time.Time24}] Waiting until it's safe to return
  :WaitForReturn
  /if (${Spawn[npc ${Param2}].ID}) {
    /doevents
    /goto :WaitForReturn
  }
/return

#Event DraekonReturn "#*#You join your powers with#*#"

SUB Event_DraekonReturn(string Line)
  /echo [${Time.Time24}] Returning!
  /if (${Spawn[npc Draekon].ID}) {
    /moveto loc 164 -1749
  }
  /delay 20
/return

|----Zenurix Fire-------------------------------------------------------
#Event ZenuFire "#*#|${Me}| as his body begins to vibrate#*#"

SUB Event_ZenuFire(string Line)
  /echo [${Time.Time24}] Running for my life!
  /if (${Spawn[npc Zenurix].ID}) {
    /moveto loc 1968 -832
  }
  /delay 15s
  /if (${Spawn[npc Zenurix].ID}) {
    /moveto loc 1966 -700
  }
/return

Sub ChaosPosition
  /stick ID ${Chaos} 6
  /delay 5
/return

Sub ZenurixPosition
  /echo [${Time.Time24}] Repositioning
  /moveto loc 1966 -700
  /delay 20
/return

Sub KeraniPosition
  /echo [${Time.Time24}] Repositioning
  /moveto loc 608 1141
  /delay 20
/return

Sub XeruPosition
  /echo [${Time.Time24}] Repositioning
  /if (${Defined[Xeru]} && ${RaidTarg}==${Xeru}) /moveto loc 2986 -569
  /if (${Defined[XeruCaretaker]} && ${RaidTarg}==${XeruCaretaker}) /moveto loc 2940 -569
  /delay 20
/return

Sub Prenz
  /declare valuePlatinum int local 500
  /doevents
  
  /if (${valuePlatinum}!=0) {
    /squelch /tar Prenz
    /delay 10
    /if (${Target.CleanName.Equal[Friend of Prenz]}) {
      /goto :Prenz
    /return

:Prenz
    /if (!${Defined[i]}) /declare i int local
    /declare targetAmountToTurnIn string local
    /declare selectedQuantity int local
    /keypress i
    /varset targetAmountToTurnIn ${valuePlatinum}
    /delay 10
    /stick 5
    /delay 30
    /stick off
    
    /nomodkey /notify InventoryWindow IW_Money0 leftmouseup
    /delay 5s (${Window[QuantityWnd].Child[QTYW_SliderInput].Text.Length} >0)
    /varset selectedQuantity ${Window[QuantityWnd].Child[QTYW_SliderInput].Text.Length}
  
:doClearOutMoney

    /keypress backspace chat
    /delay 1s (${Window[QuantityWnd].Child[QTYW_SliderInput].Text.Length} != ${selectedQuantity})
    /varset selectedQuantity ${Window[QuantityWnd].Child[QTYW_SliderInput].Text.Length}
    
    /if (${selectedQuantity} > 0) /goto :doClearOutMoney
    
    /for i 1 to ${targetAmountToTurnIn.Length}
      /keypress ${targetAmountToTurnIn.Mid[${i},1]} chat
      /delay 2s (${Window[QuantityWnd].Child[QTYW_SliderInput].Text.Length} == ${i} )
    /next i
    /doevents
    
    /nomodkey /notify QuantityWnd QTYW_Accept_Button leftmouseup
    /delay 2s (!${Window[QuantityWnd].Open})
    /doevents
    
    /click left Target
    /delay 2s (${Window[GiveWnd].Open})
    /notify GiveWnd GVW_Give_Button leftmouseup
    /delay 2s (!${Window[GiveWnd].Open})
    /keypress i
    /varset valuePlatinum 0

  /varset ChangeAction TRUE
  /varset Action Nothing
/return

Sub AOEStun
  /echo [${Time.Time24}] AOE Stun mode activated.
  /if (!${Defined[AOEResistDebuff]}) {
    /declare AOEResistDebuff string local "Wind of Tashanian"
    /declare AOEResistDebuffTimer timer local 80
  }
  /if (!${Defined[Stun1]}) {
    /declare Stun1 string local "Color Snap"
    /declare Stun1Timer timer local 0
  }
  /if (!${Defined[Stun2]}) {
    /declare Stun2 string local "Color Cloud"
    /declare Stun2Timer timer local 0
  }
  /if (!${Defined[Stun3]}) {
    /declare Stun3 string local "Color Slant"
    /declare Stun3Timer timer local 0
  }
  /if (!${Defined[Stun4]}) {
    /declare Stun4 string local "Color Skew"
    /declare Stun4Timer timer local 0
  }
  /if (!${Defined[Stun5]}) {
    /declare Stun5 string local "Color Shift"
    /declare Stun5Timer timer local 0
  }
 
  /call cast ${AOEResistDebuff}
  :StunLoop
    /doevents
    /squelch /tar npc Enthralled Vampire
    /delay 2
    /if (${Defined[ZenurixStone]} && ${Me.PctMana}<40 && ${FindItem[${ZenurixStone}].Timer}==0) {
      /echo [${Time.Time24}] Clicking ${ZenurixStone}
      /call cast ${ZenurixStone} item
      /return
    }
    /if (${Me.Gem[Euphoric Bliss Rk. III]}>0) {
      /call WaitForSpellReady "Euphoric Bliss Rk. III"
      /call cast "Euphoric Bliss Rk. III"
    }
    /if (${AOEResistDebuffTimer}>0 && ${Stun1Timer}==0) {
      /call cast ${Stun1}
      /varset Stun1Timer ${Spell[${Stun1}].RecastTime}
      /delay 20
    }
    /if (${AOEResistDebuffTimer}>0 && ${Stun2Timer}==0) {
      /call cast ${Stun2}
      /varset Stun2Timer ${Spell[${Stun2}].RecastTime}
      /delay 20
    }
    /if (${AOEResistDebuffTimer}>0 && ${Stun3Timer}==0) {
      /call cast ${Stun3}
      /varset Stun3Timer ${Spell[${Stun3}].RecastTime}
      /delay 20
    }
    /if (${AOEResistDebuffTimer}>0 && ${Stun4Timer}==0) {
      /call cast ${Stun4}
      /varset Stun4Timer ${Spell[${Stun4}].RecastTime}
      /delay 20
    }
    /if (${AOEResistDebuffTimer}>0 && ${Stun5Timer}==0) {
      /call cast ${Stun5}
      /varset Stun5Timer ${Spell[${Stun5}].RecastTime}
      /delay 20
    }
    /if (${AOEResistDebuffTimer}==0) {
      /call cast ${AOEResistDebuff}
      /varset AOEResistDebuffTimer 80
    }
  /goto :StunLoop
/return

Sub AOEMez
  /echo [${Time.Time24}] AOE Mez mode activated.
  /declare z int local
  :MezLoop
  /for z 1 to 5
  /squelch /tar ID ${NearestSpawn[${z},npc Enthralled Vampire].ID}
  /delay 3
  /if (${Defined[Mez]}) {
    /call WaitForSpellReady ${Mez}
    /call cast ${Mez}
  }
  /next z
  /if (${Action.Equal[AOEMez]}) {
    /goto :MezLoop
  }
/return

Sub CheckStatus
  /if (${Defined[Chaos]} && (${Defined[SelfLev]} || ${Me.Gem[Dead Men Floating]}>0) && !${Me.Levitating}) /call SelfLev
  /if (${Defined[Chaos]} && ${ClassType.NotEqual[Melee]} && ${Spawn[id ${Chaos}].Distance}>15) /call ChaosPosition
  /if (${Defined[Zenurix]} && ${ClassType.NotEqual[Melee]} && ${Math.Distance[1966,-700,${Me.Z}]} > 20) /call ZenurixPosition
  /if (${Defined[Seravince]} && ${Target.ID} && ${Math.Abs[${Math.Calc[${Me.Heading.Degrees}-${Target.HeadingTo.Degrees}]}]}<95) /face away
  /if (${Defined[Kerani]} && ${ClassType.NotEqual[Melee]} && ${RaidTarg}==${Kerani} && ${Math.Distance[608,1141,${Me.Z}]}>15) /call KeraniPosition
  /if (${Defined[Xeru]} && ${ClassType.NotEqual[Melee]} && ((${RaidTarg}==${Xeru} && ${Math.Distance[2986,-569,${Me.Z}]}>15) || (${Defined[XeruCaretaker]} && ${RaidTarg}==${XeruCaretaker} && ${Math.Distance[2940,-569,${Me.Z}]}>15))) /call XeruPosition
/return

Sub SelfLev
  /echo [${Time.Time24}] Rebuffing Levitate
  /if (${Me.Gem[Dead Men Floating]}>0) {
    /call cast "Dead Men Floating"
  } else {
    /call cast ${SelfLev} item
  }
/return

Sub StakeVamp
  /echo [${Time.Time24}] Staking ${Target.CleanName}
  /call cast ${VampStake} item
/return

Sub Combine
  /echo [${Time.Time24}] Now cooking by the book...
  :CombineLoop
  /if (${ChangeAction}) /return
  :CombineClearCursor 
  /if (${Cursor.ID}) {
  |**/notify GuildBankWnd GBANK_DepositButton leftmouseup**|
    /autoinventory
    /goto :CombineClearCursor 
  } 

  /notify TradeskillWnd CombineButton leftmouseup 
  /doevents 
  /delay 2
  /notify TradeskillWnd AutoInvButton leftmouseup
  
  |**/notify GuildBankWnd GBANK_DepositButton leftmouseup**|
  /goto :CombineLoop 
/return 

#event OutOfStuff "Sorry, but you don't have everything you need for this recipe in your general inventory." 
Sub Event_OutOfStuff 
  /echo [${Time.Time24}] Out of stuff! Done cooking by the book...
  /varset Action Nothing
  /varset ChangeAction TRUE
/return

|----Cure--------------------------------------------------------------------
|Event CreepingDoom "#*#|${Me}| feels death#*#"
|
|SUB Event_CreepingDoom(string Line)
|  /interrupt
|  :Cure
|  /echo [${Time.Time24}] Attempting to cure Creeping Doom
|  /squelch /tar ID ${Me.ID}
|  /call cast "Remove Greater Curse"
|  /if (${Macro.Return.Equal[CAST_SUCCESS]}) {
|  /echo [${Time.Time24}] Successfully Cured 45 Counters
|  } else {
|  /goto :Cure
|  }
|/return

|----Halloween-----------------------------------------------------------
#Event HalloweenMaldrakTo "#*#You feel Maldrak take aim on those furthest to him!"
#Event HalloweenMaldrakAway "#*#You feel Maldrak take aim on those nearest to him!"

Sub Event_HalloweenMaldrakTo
  /echo [${Time.Time24}] Running toward Maldrak...
  /moveto loc 35 -1980
  /delay 60
/return

Sub Event_HalloweenMaldrakAway
  /echo [${Time.Time24}] Running away from Maldrak...
  /moveto loc 25 -1882
  /delay 60
/return

|----Vasella-------------------------------------------------------
#Event VasellaHide "#*#You feel the enchantments of Vasella pierce through your mind! You feel a powerful urge to escape her sight#*#"

Sub Event_VasellaHide
  /echo [${Time.Time24}] Get out of the room!!
  /rsay Vasella picked me - getting out of the room!
  /tell Surley COHme!
  /interrupt
  /delay 2
  /moveto loc 55.5 20.5
  /delay 15
  /moveto loc 48.3 -19
  /delay 20
  /doortarget OBJ_TORTURE_DOOR
  /face door
  /keypress home
  /delay 3
  /keypress u
  /delay 15
  /moveto loc 55.6 -56
/return

|----Broadcast Tells-------------------------------------------------------
#Event BroadcastTell "#1# tells you, '#2#'"

Sub Event_BroadcastTell
  |--Trim hidden characters injected by the UF client. Not does not apply to messages received while zoning
  /if (!${ZoneChange}) /varset Param1 ${Param1.Right[-2].Left[-1]}

  /if (${ZoneChange} || (${MacroQuest.LastTell.NotEqual[NULL]} && ${Param1.Equal[${MacroQuest.LastTell}]})) {
    /bc [${Time.Time24}] ${Param1} told me: "${Param2}"
    /bca //popup ${Param2}
  }
/return

|----Stake Vampire-------------------------------------------------------
#Event StakeVamp "#1# staggers and collapses."
#Event StakeVamp "Master Vule staggers and then falls to the ground."

Sub Event_StakeVamp
  /if (${Defined[VampStake]} && ${Spawn[${Target.ID}].Feigning} && ${ClassType.Equal[Ranged]}) {
    /if (${Me.Casting.ID}) {
      /interrupt
      /delay 2
    }
    /echo [${Time.Time24}] Clicking ${VampStake}
    /if (${Defined[Vule]}) {
      /casting ${VampStake} -kill
    } else {
      /call cast ${VampStake} item
    }
  }
/return
