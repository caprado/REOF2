void func_00127360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_50;
    
    sp = sp + -0x10;                                            // 0x00127360: addiu $sp, $sp, -0x10
    t4 = t3 >> 0x10;                                            // 0x00127364: sra $t4, $t3, 0x10
    v0 = t2 >> 0x10;                                            // 0x00127368: sra $v0, $t2, 0x10
    if (v1 != 0) goto label_0x127388;                           // 0x00127374: bnez $v1, 0x127388
    return func_001270b0();  // Tail call                        // 0x00127380: j 0x126e18
    sp = sp + 0x10;                                             // 0x00127384: addiu $sp, $sp, 0x10
label_0x127388:
    return func_00127398();  // Tail call                        // 0x00127390: j 0x1270b0
    sp = sp + 0x10;                                             // 0x00127394: addiu $sp, $sp, 0x10
    sp = sp + -0x50;                                            // 0x00127398: addiu $sp, $sp, -0x50
    t0 = t0 << 0x10;                                            // 0x0012739c: sll $t0, $t0, 0x10
    t1 = t1 << 0x10;                                            // 0x001273a4: sll $t1, $t1, 0x10
    s1 = t0 >> 0x10;                                            // 0x001273ac: sra $s1, $t0, 0x10
    t3 = t3 << 0x10;                                            // 0x001273cc: sll $t3, $t3, 0x10
    s6 = t3 >> 0x10;                                            // 0x001273d4: sra $s6, $t3, 0x10
    s0 = t1 >> 0x10;                                            // 0x001273dc: sra $s0, $t1, 0x10
    s5 = local_50;                                              // 0x001273e8: lh $s5, 0x50($sp)
    a1 = *(int16_t*)(s4);                                       // 0x001273f0: lh $a1, 0($s4)
    if (s3 <= 0) goto label_0x12753c;                           // 0x001273f4: blez $s3, 0x12753c
    t6 = *(int16_t*)((s4) + 2);                                 // 0x001273f8: lh $t6, 2($s4)
    fp = -0x100;                                                // 0x001273fc: addiu $fp, $zero, -0x100
    s7 = 0x22 << 16;                                            // 0x00127400: lui $s7, 0x22
    v1 = *(uint16_t*)(t5);                                      // 0x00127404: lhu $v1, 0($t5)
    a0 = *(uint8_t*)((t5) + 1);                                 // 0x00127408: lbu $a0, 1($t5)
    v1 = v1 << 8;                                               // 0x0012740c: sll $v1, $v1, 8
    v1 = v1 & fp;                                               // 0x00127410: and $v1, $v1, $fp
    a0 = a0 | v1;                                               // 0x00127414: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00127418: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x0012741c: sra $a0, $a0, 0x10
    v1 = a0 & 0x8000;                                           // 0x00127420: andi $v1, $a0, 0x8000
    if (v1 != 0) goto label_0x127548;                           // 0x00127424: bnez $v1, 0x127548
    v0 = *(uint16_t*)(s2);                                      // 0x0012742c: lhu $v0, 0($s2)
    t5 = t5 + 2;                                                // 0x00127430: addiu $t5, $t5, 2
    t1 = 0 | 0x8000;                                            // 0x00127434: ori $t1, $zero, 0x8000
    t0 = 0 | 0xffff;                                            // 0x00127438: ori $t0, $zero, 0xffff
    v0 = a0 ^ v0;                                               // 0x00127440: xor $v0, $a0, $v0
    v0 = v0 & 0x1fff;                                           // 0x00127444: andi $v0, $v0, 0x1fff
    t9 = 0x7fff;                                                // 0x00127448: addiu $t9, $zero, 0x7fff
    t7 = v0 + 1;                                                // 0x0012744c: addiu $t7, $v0, 1
    t3 = s7 + 0x2468;                                           // 0x00127450: addiu $t3, $s7, 0x2468
    v1 = a3 + s5;                                               // 0x00127454: addu $v1, $a3, $s5
    a3 = 0x1e;                                                  // 0x00127458: addiu $a3, $zero, 0x1e
    v1 = v1 & 0x7fff;                                           // 0x0012745c: andi $v1, $v1, 0x7fff
    *(uint16_t*)(s2) = v1;                                      // 0x00127460: sh $v1, 0($s2)
    /* nop */                                                   // 0x00127464: nop 
label_0x127468:
    v1 = *(uint8_t*)(t5);                                       // 0x00127468: lbu $v1, 0($t5)
    t5 = t5 + 1;                                                // 0x0012746c: addiu $t5, $t5, 1
    /* multiply: s0 * t6 -> hi:lo */                            // 0x00127470: mult $ac2, $s0, $t6
    v1 = v1 << 0x18;                                            // 0x0012747c: sll $v1, $v1, 0x18
    a1 = v1 >> 0x1c;                                            // 0x00127480: sra $a1, $v1, 0x1c
    v1 = v1 >> 0x18;                                            // 0x00127484: sra $v1, $v1, 0x18
    a0 = a0 + v0;                                               // 0x00127490: addu $a0, $a0, $v0
    v0 = v1 & 0xf;                                              // 0x00127494: andi $v0, $v1, 0xf
    a0 = a0 >> 0xc;                                             // 0x00127498: sra $a0, $a0, 0xc
    v0 = v0 << 2;                                               // 0x0012749c: sll $v0, $v0, 2
    a0 = a0 + a1;                                               // 0x001274a0: addu $a0, $a0, $a1
    t4 = v0 + t3;                                               // 0x001274a4: addu $t4, $v0, $t3
    v0 = a0 + t1;                                               // 0x001274a8: addu $v0, $a0, $t1
    v1 = (a0 < -0x8000) ? 1 : 0;                                // 0x001274ac: slti $v1, $a0, -0x8000
    v0 = ((unsigned)t0 < (unsigned)v0) ? 1 : 0;                 // 0x001274b0: sltu $v0, $t0, $v0
    a1 = (t9 < a0) ? 1 : 0;                                     // 0x001274b4: slt $a1, $t9, $a0
    if (v0 == 0) goto label_0x1274cc;                           // 0x001274b8: beqz $v0, 0x1274cc
    v1 = v1 ^ 0;                                                // 0x001274bc: xori $v1, $v1, 0
    if (a1 != 0) a0 = t9;                                       // 0x001274c0: movn $a0, $t9, $a1
    v0 = -0x8000;                                               // 0x001274c4: addiu $v0, $zero, -0x8000
    if (v1 != 0) a0 = v0;                                       // 0x001274c8: movn $a0, $v0, $v1
label_0x1274cc:
    v1 = *(int32_t*)(t4);                                       // 0x001274d0: lw $v1, 0($t4)
    /* multiply: s1 * a1 -> hi:lo */                            // 0x001274d4: mult $ac2, $s1, $a1
    *(uint16_t*)(a2) = a1;                                      // 0x001274d8: sh $a1, 0($a2)
    a2 = a2 + 2;                                                // 0x001274e4: addiu $a2, $a2, 2
    v0 = v0 + t8;                                               // 0x001274e8: addu $v0, $v0, $t8
    v0 = v0 >> 0xc;                                             // 0x001274ec: sra $v0, $v0, 0xc
    a0 = v0 + a0;                                               // 0x001274f0: addu $a0, $v0, $a0
    v1 = a0 + t1;                                               // 0x001274f4: addu $v1, $a0, $t1
    v0 = (a0 < -0x8000) ? 1 : 0;                                // 0x001274f8: slti $v0, $a0, -0x8000
    v1 = ((unsigned)t0 < (unsigned)v1) ? 1 : 0;                 // 0x001274fc: sltu $v1, $t0, $v1
    a1 = (t9 < a0) ? 1 : 0;                                     // 0x00127500: slt $a1, $t9, $a0
    if (v1 == 0) goto label_0x127518;                           // 0x00127504: beqz $v1, 0x127518
    t4 = v0 ^ 0;                                                // 0x00127508: xori $t4, $v0, 0
    if (a1 != 0) a0 = t9;                                       // 0x0012750c: movn $a0, $t9, $a1
    v0 = -0x8000;                                               // 0x00127510: addiu $v0, $zero, -0x8000
    if (t4 != 0) a0 = v0;                                       // 0x00127514: movn $a0, $v0, $t4
label_0x127518:
    a3 = a3 + -2;                                               // 0x0012751c: addiu $a3, $a3, -2
    *(uint16_t*)(a2) = a1;                                      // 0x00127520: sh $a1, 0($a2)
    if (a3 >= 0) goto label_0x127468;                           // 0x00127524: bgez $a3, 0x127468
    a2 = a2 + 2;                                                // 0x00127528: addiu $a2, $a2, 2
    t2 = t2 + 1;                                                // 0x0012752c: addiu $t2, $t2, 1
    v0 = (t2 < s3) ? 1 : 0;                                     // 0x00127530: slt $v0, $t2, $s3
    /* bnezl $v0, 0x127408 */                                   // 0x00127534: bnezl $v0, 0x127408
    v1 = *(uint16_t*)(t5);                                      // 0x00127538: lhu $v1, 0($t5)
label_0x12753c:
    *(uint16_t*)((s4) + 2) = t6;                                // 0x0012753c: sh $t6, 2($s4)
    *(uint16_t*)(s4) = a1;                                      // 0x00127544: sh $a1, 0($s4)
label_0x127548:
    return;                                                     // 0x0012756c: jr $ra
    sp = sp + 0x50;                                             // 0x00127570: addiu $sp, $sp, 0x50
}