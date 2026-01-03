void func_001c9280() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c9280: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)(a0);                                       // 0x001c9290: lw $v1, 0($a0)
    at = (v1 < 0) ? 1 : 0;                                      // 0x001c9294: slt $at, $v1, $zero
    if (at != 0) goto label_0x1c92c8;                           // 0x001c9298: bnez $at, 0x1c92c8
    func_001c7ab0();  // 1c7ab0                                // 0x001c92a4: jal 0x1c7ab0
    v0 = -1;                                                    // 0x001c92b0: addiu $v0, $zero, -1
    func_001c8c80();  // 1c8c80                                // 0x001c92b8: jal 0x1c8c80
    *(uint32_t*)(s0) = v0;                                      // 0x001c92bc: sw $v0, 0($s0)
    goto label_0x1c92d0;                                        // 0x001c92c0: b 0x1c92d0
    /* nop */                                                   // 0x001c92c4: nop 
label_0x1c92c8:
    v1 = -1;                                                    // 0x001c92c8: addiu $v1, $zero, -1
    *(uint32_t*)(s0) = v1;                                      // 0x001c92cc: sw $v1, 0($s0)
label_0x1c92d0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c92d4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c92d8: jr $ra
    sp = sp + 0x20;                                             // 0x001c92dc: addiu $sp, $sp, 0x20
}