void func_001650a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001650a8: addiu $sp, $sp, -0x40
    s4 = s1 + 0xf60;                                            // 0x001650bc: addiu $s4, $s1, 0xf60
    s3 = *(int32_t*)((s1) + 0x1b74);                            // 0x001650d4: lw $s3, 0x1b74($s1)
    s0 = *(int32_t*)(s3);                                       // 0x001650d8: lw $s0, 0($s3)
    func_00131c20();  // 0x131bb8                                // 0x001650dc: jal 0x131bb8
    func_001329e0();  // 0x1329b0                                // 0x001650e8: jal 0x1329b0
    if (s0 == 0) goto label_0x165100;                           // 0x001650f4: beqz $s0, 0x165100
    v0 = 0x26 << 16;                                            // 0x001650f8: lui $v0, 0x26
    g_00261eec = s0;  // Global at 0x00261eec                   // 0x001650fc: sw $s0, 0x1eec($v0)
label_0x165100:
    func_001752f8();  // 0x1752e8                                // 0x00165104: jal 0x1752e8
    a1 = 0x1a;                                                  // 0x00165108: addiu $a1, $zero, 0x1a
    v1 = -1;                                                    // 0x0016510c: addiu $v1, $zero, -1
    if (v0 == 0) s0 = 0;                                        // 0x00165110: movz $s0, $zero, $v0
    if (s0 == v1) goto label_0x165148;                          // 0x00165114: beq $s0, $v1, 0x165148
    if (s0 >= 0) goto label_0x165138;                           // 0x0016511c: bgez $s0, 0x165138
    v0 = -2;                                                    // 0x00165120: addiu $v0, $zero, -2
    if (s0 == v0) goto label_0x165160;                          // 0x00165124: beq $s0, $v0, 0x165160
    /* nop */                                                   // 0x00165128: nop 
    goto label_0x165178;                                        // 0x0016512c: b 0x165178
    /* nop */                                                   // 0x00165130: nop 
    /* nop */                                                   // 0x00165134: nop 
label_0x165138:
    if (s0 == 0) goto label_0x16518c;                           // 0x00165138: beqz $s0, 0x16518c
    v0 = s2 + -4;                                               // 0x0016513c: addiu $v0, $s2, -4
    goto label_0x165178;                                        // 0x00165140: b 0x165178
    /* nop */                                                   // 0x00165144: nop 
label_0x165148:
    a1 = 0xff00 << 16;                                          // 0x00165148: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x0016514c: jal 0x1698d0
    a1 = a1 | 0xc08;                                            // 0x00165150: ori $a1, $a1, 0xc08
    goto label_0x16518c;                                        // 0x00165154: b 0x16518c
    v0 = s2 + -4;                                               // 0x00165158: addiu $v0, $s2, -4
    /* nop */                                                   // 0x0016515c: nop 
label_0x165160:
    a1 = 0xff00 << 16;                                          // 0x00165160: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x00165164: jal 0x1698d0
    a1 = a1 | 0xc09;                                            // 0x00165168: ori $a1, $a1, 0xc09
    goto label_0x16518c;                                        // 0x0016516c: b 0x16518c
    v0 = s2 + -4;                                               // 0x00165170: addiu $v0, $s2, -4
    /* nop */                                                   // 0x00165174: nop 
label_0x165178:
    a1 = 0xff00 << 16;                                          // 0x00165178: lui $a1, 0xff00
    func_00169940();  // 0x1698d0                                // 0x00165180: jal 0x1698d0
    a1 = a1 | 0xc07;                                            // 0x00165184: ori $a1, $a1, 0xc07
    v0 = s2 + -4;                                               // 0x00165188: addiu $v0, $s2, -4
label_0x16518c:
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0016518c: sltiu $v0, $v0, 2
    /* beqzl $v0, 0x1651a8 */                                   // 0x00165190: beqzl $v0, 0x1651a8
    v0 = 5;                                                     // 0x00165194: addiu $v0, $zero, 5
    func_00177b18();  // 0x177b10                                // 0x0016519c: jal 0x177b10
    v0 = 5;                                                     // 0x001651a4: addiu $v0, $zero, 5
    if (s2 == v0) goto label_0x1651b8;                          // 0x001651a8: beq $s2, $v0, 0x1651b8
    if (s0 == 0) goto label_0x1651c0;                           // 0x001651b0: beqz $s0, 0x1651c0
    /* nop */                                                   // 0x001651b4: nop 
label_0x1651b8:
    func_001652f0();  // 0x1652d0                                // 0x001651b8: jal 0x1652d0
    a1 = 1;                                                     // 0x001651bc: addiu $a1, $zero, 1
label_0x1651c0:
    func_001652b8();  // 0x1652a0                                // 0x001651c0: jal 0x1652a0
    v1 = 1;                                                     // 0x001651c8: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x165218;                          // 0x001651cc: bne $v0, $v1, 0x165218
    /* bnezl $s5, 0x16521c */                                   // 0x001651d4: bnezl $s5, 0x16521c
    v0 = *(int32_t*)((s3) + 0x48);                              // 0x001651dc: lw $v0, 0x48($s3)
    /* bnezl $v0, 0x16521c */                                   // 0x001651e0: bnezl $v0, 0x16521c
    a1 = 1;                                                     // 0x001651f4: addiu $a1, $zero, 1
    return func_001652f0();  // Tail call                        // 0x0016520c: j 0x1652d0
    sp = sp + 0x40;                                             // 0x00165210: addiu $sp, $sp, 0x40
    /* nop */                                                   // 0x00165214: nop 
label_0x165218:
    return;                                                     // 0x00165230: jr $ra
    sp = sp + 0x40;                                             // 0x00165234: addiu $sp, $sp, 0x40
}