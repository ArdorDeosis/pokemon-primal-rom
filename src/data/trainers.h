//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .battleType = TRAINER_BATTLE_TYPE_SINGLES,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 16867
    [DIFFICULTY_NORMAL][TRAINER_ORSVALD] =
    {
#line 16868
        .trainerName = _("Orsvald"),
#line 16870
        .trainerClass = TRAINER_CLASS_GUARDIAN,
#line 16869
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 16872
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 16873
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 16875
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 16877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 16876
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
