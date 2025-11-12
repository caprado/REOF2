void func_00174108() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 8);                                 // 0x00174108: lw $v0, 8($a0)
    t4 = a2 + a3;                                               // 0x0017410c: addu $t4, $a2, $a3
    t3 = *(int32_t*)((a0) + 4);                                 // 0x00174110: lw $t3, 4($a0)
    if (v0 <= 0) return;  // Branch to 0x1741d0                 // 0x00174118: blez $v0, 0x1741d0
    t1 = *(int32_t*)((a0) + 0x10);                              // 0x0017411c: lw $t1, 0x10($a0)
    t7 = *(int32_t*)(a0);                                       // 0x00174120: lw $t7, 0($a0)
    a2 = ((unsigned)a1 < (unsigned)a2) ? 1 : 0;                 // 0x00174124: sltu $a2, $a1, $a2
    t5 = ((unsigned)a1 < (unsigned)t4) ? 1 : 0;                 // 0x0017412c: sltu $t5, $a1, $t4
    v0 = t1 << 1;                                               // 0x00174130: sll $v0, $t1, 1
    /* nop */                                                   // 0x00174134: nop 
    v0 = v0 + t1;                                               // 0x00174138: addu $v0, $v0, $t1
    v0 = v0 << 2;                                               // 0x0017413c: sll $v0, $v0, 2
    v0 = t7 + v0;                                               // 0x00174140: addu $v0, $t7, $v0
    v1 = *(int32_t*)((v0) + 4);                                 // 0x00174144: lw $v1, 4($v0)
    a0 = *(int32_t*)((v0) + 8);                                 // 0x00174148: lw $a0, 8($v0)
    t0 = ((unsigned)a1 < (unsigned)v1) ? 1 : 0;                 // 0x0017414c: sltu $t0, $a1, $v1
    a0 = v1 + a0;                                               // 0x00174150: addu $a0, $v1, $a0
    v0 = ((unsigned)t4 < (unsigned)a0) ? 1 : 0;                 // 0x00174154: sltu $v0, $t4, $a0
    if (v0 != 0) return;  // Branch to 0x174180                 // 0x00174158: bnez $v0, 0x174180
    if (t0 != 0) return;  // Branch to 0x1741ac                 // 0x00174160: bnez $t0, 0x1741ac
    v0 = t1 + 1;                                                // 0x00174164: addiu $v0, $t1, 1
    v0 = ((unsigned)a1 < (unsigned)a0) ? 1 : 0;                 // 0x00174168: sltu $v0, $a1, $a0
    /* beqzl $v0, 0x1741ac */                                   // 0x0017416c: beqzl $v0, 0x1741ac
    v0 = t1 + 1;                                                // 0x00174170: addiu $v0, $t1, 1
    return;                                                     // 0x00174174: jr $ra
}