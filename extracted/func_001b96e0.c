void func_001b96e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_48, local_4c;
    
    sp = sp + -0x50;                                            // 0x001b96e0: addiu $sp, $sp, -0x50
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b96e8: addu.qb $zero, $sp, $s1
    a0 = *(int32_t*)((a0) + 0x24);                              // 0x001b96f4: lw $a0, 0x24($a0)
    s0 = *(int8_t*)((gp) + -0x7cc7);                            // 0x001b96f8: lb $s0, -0x7cc7($gp)
    func_001b90e0();  // 0x1b9010                                // 0x001b96fc: jal 0x1b9010
    a1 = sp + 0x38;                                             // 0x001b9700: addiu $a1, $sp, 0x38
    v1 = *(int8_t*)((s1) + 4);                                  // 0x001b9704: lb $v1, 4($s1)
    a0 = 2;                                                     // 0x001b9708: addiu $a0, $zero, 2
    if (v1 == a0) goto label_0x1b97ec;                          // 0x001b970c: beq $v1, $a0, 0x1b97ec
    t0 = 1;                                                     // 0x001b9710: addiu $t0, $zero, 1
    if (v1 == t0) goto label_0x1b9780;                          // 0x001b9714: beq $v1, $t0, 0x1b9780
    /* nop */                                                   // 0x001b9718: nop 
    if (v1 == 0) goto label_0x1b972c;                           // 0x001b971c: beqz $v1, 0x1b972c
    /* nop */                                                   // 0x001b9720: nop 
    goto label_0x1b97f0;                                        // 0x001b9724: b 0x1b97f0
label_0x1b972c:
    v1 = v1 + 1;                                                // 0x001b972c: addiu $v1, $v1, 1
    if (v0 == 0) goto label_0x1b9758;                           // 0x001b9730: beqz $v0, 0x1b9758
    *(uint8_t*)((s1) + 4) = v1;                                 // 0x001b9734: sb $v1, 4($s1)
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b9738: lbu $a1, 2($s1)
    a3 = sp + 0x38;                                             // 0x001b9740: addiu $a3, $sp, 0x38
    func_001b8c20();  // 0x1b8b40                                // 0x001b9748: jal 0x1b8b40
    goto label_0x1b977c;                                        // 0x001b9750: b 0x1b977c
    v1 = 4;                                                     // 0x001b9754: addiu $v1, $zero, 4
label_0x1b9758:
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b9758: lbu $a1, 2($s1)
    func_001b8c20();  // 0x1b8b40                                // 0x001b9768: jal 0x1b8b40
    v1 = 2;                                                     // 0x001b9770: addiu $v1, $zero, 2
    *(uint8_t*)((s1) + 4) = v1;                                 // 0x001b9774: sb $v1, 4($s1)
    v1 = 4;                                                     // 0x001b9778: addiu $v1, $zero, 4
label_0x1b977c:
    *(uint16_t*)((s1) + 8) = v1;                                // 0x001b977c: sh $v1, 8($s1)
label_0x1b9780:
    v1 = *(int16_t*)((s1) + 8);                                 // 0x001b9780: lh $v1, 8($s1)
    v1 = v1 + -1;                                               // 0x001b9784: addiu $v1, $v1, -1
    *(uint16_t*)((s1) + 8) = v1;                                // 0x001b9788: sh $v1, 8($s1)
    if (v1 >= 0) goto label_0x1b97ec;                           // 0x001b9794: bgez $v1, 0x1b97ec
    /* nop */                                                   // 0x001b9798: nop 
    v0 = 4;                                                     // 0x001b979c: addiu $v0, $zero, 4
    v1 = s0 << 2;                                               // 0x001b97a0: sll $v1, $s0, 2
    *(uint16_t*)((s1) + 8) = v0;                                // 0x001b97a4: sh $v0, 8($s1)
    a0 = sp + 0x38;                                             // 0x001b97a8: addiu $a0, $sp, 0x38
    v0 = 0x22 << 16;                                            // 0x001b97ac: lui $v0, 0x22
    a2 = sp + 0x4c;                                             // 0x001b97b0: addiu $a2, $sp, 0x4c
    v0 = v0 + -0x36b0;                                          // 0x001b97b4: addiu $v0, $v0, -0x36b0
    v0 = v0 + v1;                                               // 0x001b97b8: addu $v0, $v0, $v1
    a1 = g_0021c950;  // Global at 0x0021c950                   // 0x001b97bc: lw $a1, 0($v0)
    func_001b8e30();  // 0x1b8c20                                // 0x001b97c0: jal 0x1b8c20
    a3 = sp + 0x48;                                             // 0x001b97c4: addiu $a3, $sp, 0x48
    if (v0 == 0) goto label_0x1b97ec;                           // 0x001b97c8: beqz $v0, 0x1b97ec
    /* nop */                                                   // 0x001b97cc: nop 
    a1 = *(uint8_t*)((s1) + 2);                                 // 0x001b97d0: lbu $a1, 2($s1)
    a0 = 2;                                                     // 0x001b97d4: addiu $a0, $zero, 2
    a3 = local_4c;                                              // 0x001b97d8: lw $a3, 0x4c($sp)
    t0 = local_48;                                              // 0x001b97e0: lw $t0, 0x48($sp)
    func_001ac8d0();  // 0x1ac590                                // 0x001b97e4: jal 0x1ac590
    t1 = 0x2000;                                                // 0x001b97e8: addiu $t1, $zero, 0x2000
label_0x1b97ec:
label_0x1b97f0:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b97f0: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b97f4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b97f8: jr $ra
    sp = sp + 0x50;                                             // 0x001b97fc: addiu $sp, $sp, 0x50
}