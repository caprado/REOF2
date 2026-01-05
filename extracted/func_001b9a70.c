void func_001b9a70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b9a70: addiu $sp, $sp, -0x20
    if (a0 != 0) goto label_0x1b9aac;                           // 0x001b9a7c: bnez $a0, 0x1b9aac
    at = 0x49 << 16;                                            // 0x001b9a84: lui $at, 0x49
    v1 = g_00491341;  // Global at 0x00491341                   // 0x001b9a88: lbu $v1, 0x1341($at)
    if (v1 == 0) goto label_0x1b9aa4;                           // 0x001b9a8c: beqz $v1, 0x1b9aa4
    v0 = 5;                                                     // 0x001b9a94: addiu $v0, $zero, 5
    if (v1 == v0) goto label_0x1b9ab0;                          // 0x001b9a98: beq $v1, $v0, 0x1b9ab0
    a0 = 1;                                                     // 0x001b9a9c: addiu $a0, $zero, 1
label_0x1b9aa4:
    func_001b9c10();  // 1b9c10                                // 0x001b9aa4: jal 0x1b9c10
    a1 = 5;                                                     // 0x001b9aa8: addiu $a1, $zero, 5
label_0x1b9aac:
    a0 = 1;                                                     // 0x001b9aac: addiu $a0, $zero, 1
label_0x1b9ab0:
    func_001adcc0();  // 1adcc0                                // 0x001b9ab0: jal 0x1adcc0
    a0 = 1;                                                     // 0x001b9ab8: addiu $a0, $zero, 1
    if (v0 == a0) goto label_0x1b9ae4;                          // 0x001b9abc: beq $v0, $a0, 0x1b9ae4
    /* nop */                                                   // 0x001b9ac0: nop 
    v1 = 2;                                                     // 0x001b9ac4: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x1b9adc;                          // 0x001b9ac8: bne $v0, $v1, 0x1b9adc
    goto label_0x1b9ae8;                                        // 0x001b9ad0: b 0x1b9ae8
label_0x1b9adc:
    func_001ad420();  // 1ad420                                // 0x001b9adc: jal 0x1ad420
    a2 = 5;                                                     // 0x001b9ae0: addiu $a2, $zero, 5
label_0x1b9ae4:
label_0x1b9ae8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b9ae8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b9aec: jr $ra
    sp = sp + 0x20;                                             // 0x001b9af0: addiu $sp, $sp, 0x20
}