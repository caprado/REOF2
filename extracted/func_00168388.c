void func_00168388() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00168388: addiu $sp, $sp, -0x20
    v0 = (a1 < 0x801) ? 1 : 0;                                  // 0x0016838c: slti $v0, $a1, 0x801
    s0 = 0x800;                                                 // 0x00168394: addiu $s0, $zero, 0x800
    if (v0 != 0) s0 = a1;                                       // 0x00168398: movn $s0, $a1, $v0
    a0 = s1 + 0x94;                                             // 0x001683a8: addiu $a0, $s1, 0x94
    func_00155b20();  // 155b20                                // 0x001683b0: jal 0x155b20
    *(uint32_t*)((s1) + 0x90) = s0;                             // 0x001683c0: sw $s0, 0x90($s1)
    return func_00169058();  // Tail call                        // 0x001683cc: j 0x168ff0
    sp = sp + 0x20;                                             // 0x001683d0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001683d4: nop 
    sp = sp + -0x50;                                            // 0x001683d8: addiu $sp, $sp, -0x50
    s6 = s4 + s3;                                               // 0x001683f8: addu $s6, $s4, $s3
    goto label_0x168438;                                        // 0x00168410: b 0x168438
    s7 = *(int32_t*)((s5) + 0x10);                              // 0x00168414: lw $s7, 0x10($s5)
label_0x168418:
    func_00168868();  // 168868                                // 0x00168418: jal 0x168868
    /* nop */                                                   // 0x0016841c: nop 
    if (v0 != 0) goto label_0x1684b4;                           // 0x00168420: bnez $v0, 0x1684b4
    v0 = s2 - s4;                                               // 0x00168428: subu $v0, $s2, $s4
    v0 = v0 + 1;                                                // 0x0016842c: addiu $v0, $v0, 1
    s3 = s3 - v0;                                               // 0x00168430: subu $s3, $s3, $v0
    s4 = s4 + v0;                                               // 0x00168434: addu $s4, $s4, $v0
label_0x168438:
    if (s3 <= 0) goto label_0x1684b4;                           // 0x00168438: blez $s3, 0x1684b4
    func_001684e0();  // 1684e0                                // 0x00168448: jal 0x1684e0
    a2 = 4 << 16;                                               // 0x0016844c: lui $a2, 4
    if (s2 == 0) goto label_0x1684b0;                           // 0x00168458: beqz $s2, 0x1684b0
    a1 = s6 - s2;                                               // 0x0016845c: subu $a1, $s6, $s2
    v0 = *(uint8_t*)((s2) + 3);                                 // 0x00168460: lbu $v0, 3($s2)
    v0 = v0 + 0x40;                                             // 0x00168464: addiu $v0, $v0, 0x40
    v0 = v0 & 0xff;                                             // 0x00168468: andi $v0, $v0, 0xff
    v0 = ((unsigned)v0 < (unsigned)0x20) ? 1 : 0;               // 0x0016846c: sltiu $v0, $v0, 0x20
    /* beqzl $v0, 0x16842c */                                   // 0x00168470: beqzl $v0, 0x16842c
    v0 = s2 - s4;                                               // 0x00168474: subu $v0, $s2, $s4
    func_00168548();  // 168548                                // 0x00168478: jal 0x168548
    v0 = s6 - s1;                                               // 0x00168488: subu $v0, $s6, $s1
    v1 = (v0 < s0) ? 1 : 0;                                     // 0x00168490: slt $v1, $v0, $s0
    if (v1 != 0) s0 = v0;                                       // 0x00168494: movn $s0, $v0, $v1
    func_001685c8();  // 1685c8                                // 0x00168498: jal 0x1685c8
    if (v0 == 0) goto label_0x168418;                           // 0x001684a8: beqz $v0, 0x168418
label_0x1684b0:
label_0x1684b4:
    return;                                                     // 0x001684d4: jr $ra
    sp = sp + 0x50;                                             // 0x001684d8: addiu $sp, $sp, 0x50
}