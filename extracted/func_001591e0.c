void func_001591e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x70;                                            // 0x001591e0: addiu $sp, $sp, -0x70
    func_0015b470();  // 15b470                                // 0x0015920c: jal 0x15b470
    if (v0 == 0) goto label_0x159230;                           // 0x00159214: beqz $v0, 0x159230
    a1 = 0xff03 << 16;                                          // 0x0015921c: lui $a1, 0xff03
    func_00158bf8();  // 158bf8                                // 0x00159220: jal 0x158bf8
    a1 = a1 | 0x20c;                                            // 0x00159224: ori $a1, $a1, 0x20c
    goto label_0x1593a8;                                        // 0x00159228: b 0x1593a8
label_0x159230:
    v0 = *(int32_t*)(s0);                                       // 0x00159230: lw $v0, 0($s0)
    a2 = 0x7fff << 16;                                          // 0x00159234: lui $a2, 0x7fff
    *(uint32_t*)((s1) + 0x3c0) = 0;                             // 0x00159238: sw $zero, 0x3c0($s1)
    t0 = *(int32_t*)((v0) + 0x18);                              // 0x00159240: lw $t0, 0x18($v0)
    a1 = 1;                                                     // 0x00159248: addiu $a1, $zero, 1
    /* call function at address in t0 */                        // 0x0015924c: jalr $t0
    a2 = a2 | 0xffff;                                           // 0x00159250: ori $a2, $a2, 0xffff
    v1 = *(int32_t*)(s0);                                       // 0x00159254: lw $v1, 0($s0)
    a1 = 1;                                                     // 0x0015925c: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00159260: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00159264: jalr $v0
    v1 = local_0;                                               // 0x00159270: lw $v1, 0($sp)
    a1 = sp + 0x10;                                             // 0x00159274: addiu $a1, $sp, 0x10
    v0 = local_4;                                               // 0x00159278: lw $v0, 4($sp)
    local_10 = v1;                                              // 0x0015927c: sw $v1, 0x10($sp)
    func_001594e0();  // 1594e0                                // 0x00159280: jal 0x1594e0
    local_14 = v0;                                              // 0x00159284: sw $v0, 0x14($sp)
    v1 = 2;                                                     // 0x00159288: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x1592b8;                          // 0x0015928c: bne $v0, $v1, 0x1592b8
    func_0015b510();  // 15b510                                // 0x00159298: jal 0x15b510
    goto label_0x1593a8;                                        // 0x001592a0: b 0x1593a8
    func_00158bf8();  // 158bf8                                // 0x001592a8: jal 0x158bf8
    goto label_0x1593a8;                                        // 0x001592b0: b 0x1593a8
label_0x1592b8:
    s3 = 0x10;                                                  // 0x001592b8: addiu $s3, $zero, 0x10
    s5 = 4;                                                     // 0x001592bc: addiu $s5, $zero, 4
    s7 = 8;                                                     // 0x001592c0: addiu $s7, $zero, 8
    s4 = 0x20;                                                  // 0x001592c4: addiu $s4, $zero, 0x20
    goto label_0x15936c;                                        // 0x001592c8: b 0x15936c
    s6 = 0x40;                                                  // 0x001592cc: addiu $s6, $zero, 0x40
label_0x1592d0:
    if (v1 == s3) goto label_0x159348;                          // 0x001592d0: beq $v1, $s3, 0x159348
    v0 = ((unsigned)v1 < (unsigned)0x11) ? 1 : 0;               // 0x001592d8: sltiu $v0, $v1, 0x11
    if (v0 == 0) goto label_0x159300;                           // 0x001592dc: beqz $v0, 0x159300
    /* nop */                                                   // 0x001592e0: nop 
    if (v1 == s5) goto label_0x159338;                          // 0x001592e4: beq $v1, $s5, 0x159338
    if (v1 == s7) goto label_0x159328;                          // 0x001592ec: beq $v1, $s7, 0x159328
    /* nop */                                                   // 0x001592f0: nop 
    goto label_0x159374;                                        // 0x001592f4: b 0x159374
    a1 = -1;                                                    // 0x001592f8: addiu $a1, $zero, -1
    /* nop */                                                   // 0x001592fc: nop 
label_0x159300:
    if (v1 == s4) goto label_0x159360;                          // 0x00159300: beq $v1, $s4, 0x159360
    if (v1 != s6) goto label_0x159374;                          // 0x00159308: bne $v1, $s6, 0x159374
    a1 = -1;                                                    // 0x0015930c: addiu $a1, $zero, -1
    func_00159588();  // 159588                                // 0x00159318: jal 0x159588
    s2 = 0x40;                                                  // 0x0015931c: addiu $s2, $zero, 0x40
    goto label_0x159370;                                        // 0x00159320: b 0x159370
label_0x159328:
    func_00159c70();  // 159c70                                // 0x00159328: jal 0x159c70
    s2 = 8;                                                     // 0x0015932c: addiu $s2, $zero, 8
    goto label_0x159370;                                        // 0x00159330: b 0x159370
label_0x159338:
    func_00159f30();  // 159f30                                // 0x00159338: jal 0x159f30
    s2 = 4;                                                     // 0x0015933c: addiu $s2, $zero, 4
    goto label_0x159370;                                        // 0x00159340: b 0x159370
label_0x159348:
    func_0015a520();  // 15a520                                // 0x0015934c: jal 0x15a520
    goto label_0x159370;                                        // 0x00159354: b 0x159370
    /* nop */                                                   // 0x0015935c: nop 
label_0x159360:
    func_0015a610();  // 15a610                                // 0x00159364: jal 0x15a610
label_0x15936c:
label_0x159370:
    a1 = -1;                                                    // 0x00159370: addiu $a1, $zero, -1
label_0x159374:
    func_0015ac00();  // 15ac00                                // 0x00159374: jal 0x15ac00
    /* bnezl $v0, 0x1592a8 */                                   // 0x0015937c: bnezl $v0, 0x1592a8
    func_001593d0();  // 1593d0                                // 0x00159384: jal 0x1593d0
    if (v1 == 0) goto label_0x1593a0;                           // 0x00159390: beqz $v1, 0x1593a0
    v0 = v1 & 3;                                                // 0x00159394: andi $v0, $v1, 3
    if (v0 == 0) goto label_0x1592d0;                           // 0x00159398: beqz $v0, 0x1592d0
    /* nop */                                                   // 0x0015939c: nop 
label_0x1593a0:
label_0x1593a8:
    return;                                                     // 0x001593c8: jr $ra
    sp = sp + 0x70;                                             // 0x001593cc: addiu $sp, $sp, 0x70
}