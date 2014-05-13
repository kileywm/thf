|-- Group Composition --|

|-- Change this line to show the number of group leaders you have. Example: GroupLead[1] for one group, or GroupLead[5] for five groups. --|
/if (!${Defined[GroupLead]})      /declare GroupLead[3] string outer UNDEFINED-ARRAY-ELEMENT

|-- Set the names of all of your group leaders. Example: GroupLead[1] PlayerName --|
/varset GroupLead[1] Mand
/varset GroupLead[2] Tweety
/varset GroupLead[3] Barnyard

|-- Set the number of players in your team (across all groups). Example: Team[6] for one group, or Team[30] for five groups. --|
/if (!${Defined[Team]})      /declare Team[18] string outer UNDEFINED-ARRAY-ELEMENT

|-- Set the name of each group member. Do not exclude the group leader, but rather make them first. This is later used for group invites and casting Call of the Hero on your team members, among other things. --|
|-- Group 1 --|
/varset Team[1] ${GroupLead[1]}
/varset Team[2] Dydil
/varset Team[3] Bixie
|/varset Team[4] Ferley
|/varset Team[5] Firley
/varset Team[6] Pree
/varset Team[4] Huri
/varset Team[5] Evangeline
|-- Group 2 --|
/varset Team[7] ${GroupLead[2]}
/varset Team[8] Surley
/varset Team[9] Guro
/varset Team[10] Forley
/varset Team[11] Vetre
/varset Team[12] Tilli
|-- Group 3 --|
/varset Team[13] ${GroupLead[3]}
/varset Team[14] Hypgno
/varset Team[15] Noren
/varset Team[16] Goru
/varset Team[17] Grimley
/varset Team[18] Gummibear
|-- Group 4 --|

|-- Name of the spellset used by your team --|
/if (!${Defined[SpellSet]}) /declare SpellSet string outer Group








