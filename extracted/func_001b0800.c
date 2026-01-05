void func_001b0800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001b0800: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b0808: addu.qb $zero, $sp, $s1
    goto label_0x1b087c;                                        // 0x001b0814: b 0x1b087c
label_0x1b081c:
    thunk_func_001a19a0();  // 1a19a0                          // 0x001b081c: jal 0x1a19a0
    v1 = 1;                                                     // 0x001b0824: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1b0874;                          // 0x001b0828: bne $v0, $v1, 0x1b0874
    v1 = s1 + 1;                                                // 0x001b082c: addiu $v1, $s1, 1
    v1 = 0x48 << 16;                                            // 0x001b0834: lui $v1, 0x48
    v1 = v1 + -0x42d0;                                          // 0x001b083c: addiu $v1, $v1, -0x42d0
    a0 = a1 << 4;                                               // 0x001b0840: sll $a0, $a1, 4
    a0 = a0 + a1;                                               // 0x001b0844: addu $a0, $a0, $a1
    a0 = a0 << 8;                                               // 0x001b0848: sll $a0, $a0, 8
    a0 = v1 + a0;                                               // 0x001b084c: addu $a0, $v1, $a0
    v1 = *(int8_t*)(a0);                                        // 0x001b0850: lb $v1, 0($a0)
    if (v1 == 0) goto label_0x1b0870;                           // 0x001b0854: beqz $v1, 0x1b0870
    /* nop */                                                   // 0x001b0858: nop 
    v0 = s0 + 1;                                                // 0x001b085c: addiu $v0, $s0, 1
    func_001b07e0();  // 1b07e0                                // 0x001b0868: jal 0x1b07e0
label_0x1b0870:
    v1 = s1 + 1;                                                // 0x001b0870: addiu $v1, $s1, 1
label_0x1b0874:
label_0x1b087c:
    v1 = *(int8_t*)((gp) + -0x6350);                            // 0x001b087c: lb $v1, -0x6350($gp)
    v1 = (a0 < v1) ? 1 : 0;                                     // 0x001b0888: slt $v1, $a0, $v1
    if (v1 != 0) goto label_0x1b081c;                           // 0x001b088c: bnez $v1, 0x1b081c
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b0898: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b089c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b08a0: jr $ra
    sp = sp + 0x30;                                             // 0x001b08a4: addiu $sp, $sp, 0x30
}