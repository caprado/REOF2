void func_00112210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00112210: addiu $sp, $sp, -0x50
    a0 = a0 << 0x10;                                            // 0x00112214: sll $a0, $a0, 0x10
    a1 = a1 << 0x10;                                            // 0x0011221c: sll $a1, $a1, 0x10
    a2 = a2 << 0x10;                                            // 0x00112224: sll $a2, $a2, 0x10
    a3 = a3 << 0x10;                                            // 0x0011222c: sll $a3, $a3, 0x10
    a0 = a0 >> 0x10;                                            // 0x00112234: sra $a0, $a0, 0x10
    s1 = a1 >> 0x10;                                            // 0x0011223c: sra $s1, $a1, 0x10
    s2 = a2 >> 0x10;                                            // 0x00112240: sra $s2, $a2, 0x10
    v0 = 1;                                                     // 0x00112244: addiu $v0, $zero, 1
    if (a0 == v0) goto label_0x112310;                          // 0x00112248: beq $a0, $v0, 0x112310
    s3 = a3 >> 0x10;                                            // 0x0011224c: sra $s3, $a3, 0x10
    v0 = (a0 < 2) ? 1 : 0;                                      // 0x00112250: slti $v0, $a0, 2
    /* beqzl $v0, 0x11226c */                                   // 0x00112254: beqzl $v0, 0x11226c
    v0 = 5;                                                     // 0x00112258: addiu $v0, $zero, 5
    if (a0 == 0) goto label_0x11227c;                           // 0x0011225c: beqz $a0, 0x11227c
    goto label_0x11238c;                                        // 0x00112264: b 0x11238c
    if (a0 == v0) goto label_0x112328;                          // 0x0011226c: beq $a0, $v0, 0x112328
    goto label_0x11238c;                                        // 0x00112274: b 0x11238c
label_0x11227c:
    func_001123a0();  // 1123a0                                // 0x0011227c: jal 0x1123a0
    /* nop */                                                   // 0x00112280: nop 
    v1 = 0x1200 << 16;                                          // 0x00112284: lui $v1, 0x1200
    a0 = 0x200;                                                 // 0x00112288: addiu $a0, $zero, 0x200
    v1 = v1 | 0x1000;                                           // 0x0011228c: ori $v1, $v1, 0x1000
    *(uint16_t*)(s0) = s1;                                      // 0x00112298: sh $s1, 0($s0)
    a0 = 0 | 0xff00;                                            // 0x0011229c: ori $a0, $zero, 0xff00
    *(uint16_t*)((s0) + 2) = s2;                                // 0x001122a4: sh $s2, 2($s0)
    v0 = v0 & 0xff;                                             // 0x001122ac: andi $v0, $v0, 0xff
    v0 = v0 & 0xffff;                                           // 0x001122b0: andi $v0, $v0, 0xffff
    SetVSyncFlag();  // 0x114620                                // 0x001122b4: jal 0x114620
    *(uint16_t*)((s0) + 6) = v0;                                // 0x001122b8: sh $v0, 6($s0)
    v1 = ((unsigned)0 < (unsigned)s3) ? 1 : 0;                  // 0x001122bc: sltu $v1, $zero, $s3
    v0 = *(int32_t*)((s0) + 8);                                 // 0x001122c0: lw $v0, 8($s0)
    if (v0 == 0) goto label_0x1122e8;                           // 0x001122c4: beqz $v0, 0x1122e8
    *(uint16_t*)((s0) + 4) = v1;                                // 0x001122c8: sh $v1, 4($s0)
    func_00114dc0();  // 114dc0                                // 0x001122cc: jal 0x114dc0
    a0 = 2;                                                     // 0x001122d0: addiu $a0, $zero, 2
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x001122d4: lw $a1, 0xc($s0)
    AddDmacHandler();  // 0x113fe0                              // 0x001122d8: jal 0x113fe0
    a0 = 2;                                                     // 0x001122dc: addiu $a0, $zero, 2
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x001122e0: sw $zero, 0xc($s0)
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x001122e4: sw $zero, 8($s0)
label_0x1122e8:
    a0 = s1 & 1;                                                // 0x001122e8: andi $a0, $s1, 1
    a1 = s2 & 0xff;                                             // 0x001122ec: andi $a1, $s2, 0xff
    a2 = s3 & 1;                                                // 0x001122f0: andi $a2, $s3, 1
    return func_00113ee0();  // Tail call                       // 0x00112308: j 0x113ee0
    sp = sp + 0x50;                                             // 0x0011230c: addiu $sp, $sp, 0x50
label_0x112310:
    v0 = 0x1200 << 16;                                          // 0x00112310: lui $v0, 0x1200
    v1 = 0x100;                                                 // 0x00112314: addiu $v1, $zero, 0x100
    v0 = v0 | 0x1000;                                           // 0x00112318: ori $v0, $v0, 0x1000
    goto label_0x112388;                                        // 0x00112320: b 0x112388
label_0x112328:
    func_001123a0();  // 1123a0                                // 0x00112328: jal 0x1123a0
    /* nop */                                                   // 0x0011232c: nop 
    v1 = 0x1200 << 16;                                          // 0x00112330: lui $v1, 0x1200
    v1 = v1 | 0x1000;                                           // 0x00112338: ori $v1, $v1, 0x1000
    a2 = ((unsigned)0 < (unsigned)s3) ? 1 : 0;                  // 0x0011233c: sltu $a2, $zero, $s3
    a0 = s1 & 1;                                                // 0x00112344: andi $a0, $s1, 1
    *(uint16_t*)((s0) + 4) = a2;                                // 0x00112348: sh $a2, 4($s0)
    a1 = s2 & 0xff;                                             // 0x0011234c: andi $a1, $s2, 0xff
    *(uint16_t*)(s0) = s1;                                      // 0x00112354: sh $s1, 0($s0)
    v0 = v0 & 0xff;                                             // 0x00112358: andi $v0, $v0, 0xff
    *(uint16_t*)((s0) + 2) = s2;                                // 0x0011235c: sh $s2, 2($s0)
    v0 = v0 & 0xffff;                                           // 0x00112360: andi $v0, $v0, 0xffff
    a2 = s3 & 1;                                                // 0x00112364: andi $a2, $s3, 1
    *(uint16_t*)((s0) + 6) = v0;                                // 0x00112368: sh $v0, 6($s0)
    return func_00113ee0();  // Tail call                       // 0x00112380: j 0x113ee0
    sp = sp + 0x50;                                             // 0x00112384: addiu $sp, $sp, 0x50
label_0x112388:
label_0x11238c:
    return;                                                     // 0x00112398: jr $ra
    sp = sp + 0x50;                                             // 0x0011239c: addiu $sp, $sp, 0x50
}