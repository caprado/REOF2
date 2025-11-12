void func_001b8170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b8170: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b8178: addu.qb $zero, $sp, $s1
    func_001b8170();  // 0x1b8020                                // 0x001b8188: jal 0x1b8020
    v1 = 0xff;                                                  // 0x001b8194: addiu $v1, $zero, 0xff
    if (s0 == v1) goto label_0x1b81e0;                          // 0x001b8198: beq $s0, $v1, 0x1b81e0
    /* nop */                                                   // 0x001b819c: nop 
    if (s1 != 0) goto label_0x1b81c0;                           // 0x001b81a0: bnez $s1, 0x1b81c0
    a0 = 2;                                                     // 0x001b81a8: addiu $a0, $zero, 2
    func_001b8b40();  // 0x1b8b20                                // 0x001b81b0: jal 0x1b8b20
    goto label_0x1b81e0;                                        // 0x001b81b8: b 0x1b81e0
    *(uint16_t*)((gp) + -0x63a4) = s0;                          // 0x001b81bc: sh $s0, -0x63a4($gp)
label_0x1b81c0:
    a0 = 2;                                                     // 0x001b81c0: addiu $a0, $zero, 2
    t0 = 1;                                                     // 0x001b81cc: addiu $t0, $zero, 1
    func_001b8c20();  // 0x1b8b40                                // 0x001b81d4: jal 0x1b8b40
    *(uint16_t*)((gp) + -0x63a4) = s0;                          // 0x001b81dc: sh $s0, -0x63a4($gp)
label_0x1b81e0:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b81e4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b81e8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b81ec: jr $ra
    sp = sp + 0x30;                                             // 0x001b81f0: addiu $sp, $sp, 0x30
}