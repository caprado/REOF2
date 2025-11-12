void func_00116c90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t9 = 0xffff << 16;                                          // 0x00116c90: lui $t9, 0xffff
    t9 = t9 | 0xffc0;                                           // 0x00116c94: ori $t9, $t9, 0xffc0
    if (a1 <= 0) goto label_0x116d34;                           // 0x00116c98: blez $a1, 0x116d34
    t2 = a0 + a1;                                               // 0x00116c9c: addu $t2, $a0, $a1
    t0 = a0 & t9;                                               // 0x00116ca0: and $t0, $a0, $t9
    t2 = t2 + -1;                                               // 0x00116ca4: addiu $t2, $t2, -1
    t1 = t2 & t9;                                               // 0x00116ca8: and $t1, $t2, $t9
    t2 = t1 - t0;                                               // 0x00116cac: subu $t2, $t1, $t0
    t3 = (unsigned)t2 >> 6;                                     // 0x00116cb0: srl $t3, $t2, 6
    t3 = t3 + 1;                                                // 0x00116cb4: addiu $t3, $t3, 1
    t1 = t3 & 7;                                                // 0x00116cb8: andi $t1, $t3, 7
    if (t1 == 0) goto label_0x116ce0;                           // 0x00116cbc: beqz $t1, 0x116ce0
    t2 = (unsigned)t3 >> 3;                                     // 0x00116cc0: srl $t2, $t3, 3
label_0x116cc4:
    /* memory sync */                                           // 0x00116cc4: sync 
    /* cache 0x18, 0($t0) */                                    // 0x00116cc8: cache 0x18, 0($t0)
    /* memory sync */                                           // 0x00116ccc: sync 
    /* nop */                                                   // 0x00116cd0: nop 
    t1 = t1 + -1;                                               // 0x00116cd4: addiu $t1, $t1, -1
    if (t1 > 0) goto label_0x116cc4;                            // 0x00116cd8: bgtz $t1, 0x116cc4
    t0 = t0 + 0x40;                                             // 0x00116cdc: addiu $t0, $t0, 0x40
label_0x116ce0:
    if (t2 == 0) goto label_0x116d34;                           // 0x00116ce0: beqz $t2, 0x116d34
label_0x116ce4:
    t2 = t2 + -1;                                               // 0x00116ce4: addiu $t2, $t2, -1
    /* memory sync */                                           // 0x00116ce8: sync 
    /* cache 0x18, 0($t0) */                                    // 0x00116cec: cache 0x18, 0($t0)
    /* memory sync */                                           // 0x00116cf0: sync 
    /* cache 0x18, 0x40($t0) */                                 // 0x00116cf4: cache 0x18, 0x40($t0)
    /* memory sync */                                           // 0x00116cf8: sync 
    /* cache 0x18, 0x80($t0) */                                 // 0x00116cfc: cache 0x18, 0x80($t0)
    /* memory sync */                                           // 0x00116d00: sync 
    /* cache 0x18, 0xc0($t0) */                                 // 0x00116d04: cache 0x18, 0xc0($t0)
    /* memory sync */                                           // 0x00116d08: sync 
    /* cache 0x18, 0x100($t0) */                                // 0x00116d0c: cache 0x18, 0x100($t0)
    /* memory sync */                                           // 0x00116d10: sync 
    /* cache 0x18, 0x140($t0) */                                // 0x00116d14: cache 0x18, 0x140($t0)
    /* memory sync */                                           // 0x00116d18: sync 
    /* cache 0x18, 0x180($t0) */                                // 0x00116d1c: cache 0x18, 0x180($t0)
    /* memory sync */                                           // 0x00116d20: sync 
    /* cache 0x18, 0x1c0($t0) */                                // 0x00116d24: cache 0x18, 0x1c0($t0)
    /* memory sync */                                           // 0x00116d28: sync 
    if (t2 > 0) goto label_0x116ce4;                            // 0x00116d2c: bgtz $t2, 0x116ce4
    t0 = t0 + 0x200;                                            // 0x00116d30: addiu $t0, $t0, 0x200
label_0x116d34:
    return;                                                     // 0x00116d34: jr $ra
    /* nop */                                                   // 0x00116d38: nop 
}