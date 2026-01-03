void func_001442d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001442d8: addiu $sp, $sp, -0x70
    func_00145818();  // 145818                                // 0x00144308: jal 0x145818
    *(uint32_t*)((s0) + 0x134) = 0;                             // 0x0014430c: sw $zero, 0x134($s0)
    func_00145478();  // 145478                                // 0x00144314: jal 0x145478
    a1 = 0x20;                                                  // 0x00144318: addiu $a1, $zero, 0x20
    v0 = s2 + -0x101;                                           // 0x00144320: addiu $v0, $s2, -0x101
    v0 = ((unsigned)v0 < (unsigned)0xaf) ? 1 : 0;               // 0x00144324: sltiu $v0, $v0, 0xaf
    if (v0 != 0) goto label_0x144348;                           // 0x00144328: bnez $v0, 0x144348
    a1 = 0x22 << 16;                                            // 0x00144330: lui $a1, 0x22
    a1 = &str_002266c0;  // "_sliceA0(): error happens"         // 0x00144334: addiu $a1, $a1, 0x66c0
    func_001484f8();  // 1484f8                                // 0x00144338: jal 0x1484f8
    goto label_0x1443e0;                                        // 0x00144340: b 0x1443e0
    v0 = 2;                                                     // 0x00144344: addiu $v0, $zero, 2
label_0x144348:
    func_00145598();  // 145598                                // 0x00144348: jal 0x145598
    a1 = 0x20;                                                  // 0x0014434c: addiu $a1, $zero, 0x20
    func_00145898();  // 145898                                // 0x00144350: jal 0x145898
    func_001440b0();  // 1440b0                                // 0x0014435c: jal 0x1440b0
    *(uint32_t*)(s4) = a2;                                      // 0x00144368: sw $a2, 0($s4)
    v0 = *(int32_t*)((s0) + 0x134);                             // 0x0014436c: lw $v0, 0x134($s0)
    if (v0 == 0) goto label_0x14438c;                           // 0x00144370: beqz $v0, 0x14438c
    a1 = 0x22 << 16;                                            // 0x00144374: lui $a1, 0x22
    func_00148530();  // 148530                                // 0x0014437c: jal 0x148530
    a1 = &str_002266e8;  // "Too many macroblocks in picture"   // 0x00144380: addiu $a1, $a1, 0x66e8
    goto label_0x1443e0;                                        // 0x00144384: b 0x1443e0
    v0 = 1;                                                     // 0x00144388: addiu $v0, $zero, 1
label_0x14438c:
    v0 = s2 & 0xff;                                             // 0x0014438c: andi $v0, $s2, 0xff
    v1 = s3 << 7;                                               // 0x00144390: sll $v1, $s3, 7
    a0 = *(int32_t*)((s0) + 0x144);                             // 0x00144394: lw $a0, 0x144($s0)
    v1 = v1 + v0;                                               // 0x00144398: addu $v1, $v1, $v0
    v1 = v1 + -1;                                               // 0x0014439c: addiu $v1, $v1, -1
    a1 = 1;                                                     // 0x001443a0: addiu $a1, $zero, 1
    /* multiply: v1 * a0 -> hi:lo */                            // 0x001443a4: mult $ac2, $v1, $a0
    v1 = v0 + a2;                                               // 0x001443a8: addu $v1, $v0, $a2
    v1 = v1 + -1;                                               // 0x001443ac: addiu $v1, $v1, -1
    *(uint32_t*)(s5) = v1;                                      // 0x001443b4: sw $v1, 0($s5)
    *(uint32_t*)(s4) = a1;                                      // 0x001443b8: sw $a1, 0($s4)
    *(uint32_t*)((s0) + 0x1c8) = a1;                            // 0x001443bc: sw $a1, 0x1c8($s0)
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x001443c0: sw $zero, 8($s1)
    *(uint32_t*)((s1) + 0x14) = 0;                              // 0x001443c4: sw $zero, 0x14($s1)
    *(uint32_t*)((s1) + 0x10) = 0;                              // 0x001443c8: sw $zero, 0x10($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x001443cc: sw $zero, 4($s1)
    *(uint32_t*)(s1) = 0;                                       // 0x001443d0: sw $zero, 0($s1)
    *(uint32_t*)((s1) + 0x1c) = 0;                              // 0x001443d4: sw $zero, 0x1c($s1)
    *(uint32_t*)((s1) + 0x18) = 0;                              // 0x001443d8: sw $zero, 0x18($s1)
    *(uint32_t*)((s1) + 0xc) = 0;                               // 0x001443dc: sw $zero, 0xc($s1)
label_0x1443e0:
    return;                                                     // 0x001443fc: jr $ra
    sp = sp + 0x70;                                             // 0x00144400: addiu $sp, $sp, 0x70
}