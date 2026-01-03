void func_0013d398() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013d398: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 0x20);                              // 0x0013d3b0: lw $v0, 0x20($s0)
    v1 = *(int32_t*)((s0) + 0x24);                              // 0x0013d3b4: lw $v1, 0x24($s0)
    v0 = v0 << 5;                                               // 0x0013d3b8: sll $v0, $v0, 5
    v0 = s0 + v0;                                               // 0x0013d3bc: addu $v0, $s0, $v0
    if (v1 <= 0) goto label_0x13d4a8;                           // 0x0013d3c0: blez $v1, 0x13d4a8
    s1 = v0 + 0x38;                                             // 0x0013d3c4: addiu $s1, $v0, 0x38
    func_001303a0();  // 1303a0                                // 0x0013d3c8: jal 0x1303a0
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d3cc: lw $a0, 0x28($s0)
    func_001301e0();  // 1301e0                                // 0x0013d3d0: jal 0x1301e0
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d3d4: lw $a0, 0x28($s0)
    s2 = *(int32_t*)((s1) + 4);                                 // 0x0013d3d8: lw $s2, 4($s1)
    func_0010ae00();  // 10ae00                                // 0x0013d3dc: jal 0x10ae00
    if (a2 == 0) goto label_0x13d414;                           // 0x0013d3ec: beqz $a2, 0x13d414
    /* nop */                                                   // 0x0013d3f4: nop 
label_0x13d3f8:
    v0 = s2 + a1;                                               // 0x0013d3f8: addu $v0, $s2, $a1
    a1 = a1 + 1;                                                // 0x0013d3fc: addiu $a1, $a1, 1
    v1 = *(uint8_t*)(v0);                                       // 0x0013d400: lbu $v1, 0($v0)
    a0 = ((unsigned)a1 < (unsigned)a2) ? 1 : 0;                 // 0x0013d404: sltu $a0, $a1, $a2
    /* nop */                                                   // 0x0013d408: nop 
    if (a0 != 0) goto label_0x13d3f8;                           // 0x0013d40c: bnez $a0, 0x13d3f8
    a3 = a3 + v1;                                               // 0x0013d410: addu $a3, $a3, $v1
label_0x13d414:
    v0 = *(int32_t*)((s1) + 8);                                 // 0x0013d414: lw $v0, 8($s1)
    if (a3 == v0) goto label_0x13d440;                          // 0x0013d418: beq $a3, $v0, 0x13d440
    a0 = 0x22 << 16;                                            // 0x0013d41c: lui $a0, 0x22
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0013d420: lw $a1, 4($s1)
    a0 = &str_00225cd8;  // "E0007: lsc->fp=NULL\n"             // 0x0013d428: addiu $a0, $a0, 0x5cd8
    return func_0013d248();  // Tail call                        // 0x0013d438: j 0x13d1b8
    sp = sp + 0x20;                                             // 0x0013d43c: addiu $sp, $sp, 0x20
label_0x13d440:
    a3 = *(int32_t*)((s1) + 0x10);                              // 0x0013d440: lw $a3, 0x10($s1)
    t0 = *(int32_t*)((s1) + 0x14);                              // 0x0013d444: lw $t0, 0x14($s1)
    a2 = *(int32_t*)((s1) + 0xc);                               // 0x0013d448: lw $a2, 0xc($s1)
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d44c: lw $a0, 0x28($s0)
    func_00130138();  // 130138                                // 0x0013d450: jal 0x130138
    a1 = *(int32_t*)((s1) + 4);                                 // 0x0013d454: lw $a1, 4($s1)
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d458: lw $a0, 0x28($s0)
    func_00130468();  // 130468                                // 0x0013d45c: jal 0x130468
    a1 = *(int32_t*)((s1) + 0x14);                              // 0x0013d460: lw $a1, 0x14($s1)
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x0013d464: lw $v0, 0x14($s1)
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d468: lw $a0, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x0013d46c: sw $v0, 0x2c($s0)
    *(uint32_t*)((s1) + 0x1c) = 0;                              // 0x0013d470: sw $zero, 0x1c($s1)
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x0013d474: sb $zero, 2($s0)
    a2 = *(int32_t*)((s0) + 0x18);                              // 0x0013d478: lw $a2, 0x18($s0)
    func_00130ad8();  // 130ad8                                // 0x0013d47c: jal 0x130ad8
    a1 = *(int32_t*)((s0) + 0x14);                              // 0x0013d480: lw $a1, 0x14($s0)
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d484: lw $a0, 0x28($s0)
    func_00130280();  // 130280                                // 0x0013d488: jal 0x130280
    func_00130318();  // 130318                                // 0x0013d490: jal 0x130318
    a0 = *(int32_t*)((s0) + 0x28);                              // 0x0013d494: lw $a0, 0x28($s0)
    v1 = 1;                                                     // 0x0013d498: addiu $v1, $zero, 1
    v0 = 1;                                                     // 0x0013d49c: addiu $v0, $zero, 1
    *(uint8_t*)((s0) + 2) = v1;                                 // 0x0013d4a0: sb $v1, 2($s0)
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x0013d4a4: sw $v0, 0x18($s1)
label_0x13d4a8:
    return;                                                     // 0x0013d4b8: jr $ra
    sp = sp + 0x20;                                             // 0x0013d4bc: addiu $sp, $sp, 0x20
}