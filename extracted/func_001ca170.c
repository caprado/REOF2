void func_001ca170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001ca170: addiu $sp, $sp, -0x20
    at = 0x31 << 16;                                            // 0x001ca174: lui $at, 0x31
    v0 = g_00316a80;  // Global at 0x00316a80                   // 0x001ca180: lbu $v0, 0x6a80($at)
    if (v0 == 0) goto label_0x1ca1a0;                           // 0x001ca184: beqz $v0, 0x1ca1a0
    at = 0x31 << 16;                                            // 0x001ca18c: lui $at, 0x31
    v0 = 1;                                                     // 0x001ca190: addiu $v0, $zero, 1
    v1 = g_00316a88;  // Global at 0x00316a88                   // 0x001ca194: lw $v1, 0x6a88($at)
    goto label_0x1ca1d0;                                        // 0x001ca198: b 0x1ca1d0
    *(uint32_t*)(s0) = v1;                                      // 0x001ca19c: sw $v1, 0($s0)
label_0x1ca1a0:
    func_001c8a00();  // 1c8a00                                // 0x001ca1a0: jal 0x1c8a00
    /* nop */                                                   // 0x001ca1a4: nop 
    if (v0 == 0) goto label_0x1ca1d0;                           // 0x001ca1b0: beqz $v0, 0x1ca1d0
    v1 = 1;                                                     // 0x001ca1b4: addiu $v1, $zero, 1
    at = 0x31 << 16;                                            // 0x001ca1b8: lui $at, 0x31
    g_00316a80 = v1;  // Global at 0x00316a80                   // 0x001ca1bc: sb $v1, 0x6a80($at)
    v1 = *(int32_t*)(s0);                                       // 0x001ca1c0: lw $v1, 0($s0)
    at = 0x31 << 16;                                            // 0x001ca1c4: lui $at, 0x31
    g_00316a88 = v1;  // Global at 0x00316a88                   // 0x001ca1c8: sw $v1, 0x6a88($at)
    /* nop */                                                   // 0x001ca1cc: nop 
label_0x1ca1d0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ca1d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ca1d8: jr $ra
    sp = sp + 0x20;                                             // 0x001ca1dc: addiu $sp, $sp, 0x20
}