void func_001af280() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = *(int32_t*)((gp) + -0x63b4);                           // 0x001af280: lw $a2, -0x63b4($gp)
    a1 = 0x2b << 16;                                            // 0x001af284: lui $a1, 0x2b
    goto label_0x1af2a8;                                        // 0x001af28c: b 0x1af2a8
    a1 = a1 + -0x5770;                                          // 0x001af290: addiu $a1, $a1, -0x5770
label_0x1af294:
    v1 = a1 + v1;                                               // 0x001af294: addu $v1, $a1, $v1
    v1 = g_002aa891;  // Global at 0x002aa891                   // 0x001af298: lw $v1, 0($v1)
    if (v1 == a0) goto label_0x1af2dc;                          // 0x001af29c: beq $v1, $a0, 0x1af2dc
    /* nop */                                                   // 0x001af2a0: nop 
    a3 = a3 + 1;                                                // 0x001af2a4: addiu $a3, $a3, 1
label_0x1af2a8:
    v1 = (a3 < a2) ? 1 : 0;                                     // 0x001af2a8: slt $v1, $a3, $a2
    if (v1 != 0) goto label_0x1af294;                           // 0x001af2ac: bnez $v1, 0x1af294
    v1 = a3 << 2;                                               // 0x001af2b0: sll $v1, $a3, 2
    v1 = 8;                                                     // 0x001af2b4: addiu $v1, $zero, 8
    if (a2 == v1) goto label_0x1af2dc;                          // 0x001af2b8: beq $a2, $v1, 0x1af2dc
    v1 = 0x2b << 16;                                            // 0x001af2bc: lui $v1, 0x2b
    a1 = a2 << 2;                                               // 0x001af2c0: sll $a1, $a2, 2
    v1 = v1 + -0x5770;                                          // 0x001af2c4: addiu $v1, $v1, -0x5770
    v1 = v1 + a1;                                               // 0x001af2c8: addu $v1, $v1, $a1
    g_002aa890 = a0;  // Global at 0x002aa890                   // 0x001af2cc: sw $a0, 0($v1)
    v1 = *(int32_t*)((gp) + -0x63b4);                           // 0x001af2d0: lw $v1, -0x63b4($gp)
    v1 = v1 + 1;                                                // 0x001af2d4: addiu $v1, $v1, 1
    *(uint32_t*)((gp) + -0x63b4) = v1;                          // 0x001af2d8: sw $v1, -0x63b4($gp)
label_0x1af2dc:
    return;                                                     // 0x001af2dc: jr $ra
    /* nop */                                                   // 0x001af2e0: nop 
}