void func_001c9310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c9310: addiu $sp, $sp, -0x20
    v1 = *(int32_t*)(a0);                                       // 0x001c9320: lw $v1, 0($a0)
    at = (v1 < 0) ? 1 : 0;                                      // 0x001c9324: slt $at, $v1, $zero
    if (at != 0) goto label_0x1c9358;                           // 0x001c9328: bnez $at, 0x1c9358
    func_001c7e90();  // 1c7e90                                // 0x001c9334: jal 0x1c7e90
    v0 = -1;                                                    // 0x001c9340: addiu $v0, $zero, -1
    func_001c8c80();  // 1c8c80                                // 0x001c9348: jal 0x1c8c80
    *(uint32_t*)(s0) = v0;                                      // 0x001c934c: sw $v0, 0($s0)
    goto label_0x1c9360;                                        // 0x001c9350: b 0x1c9360
    /* nop */                                                   // 0x001c9354: nop 
label_0x1c9358:
    v1 = -1;                                                    // 0x001c9358: addiu $v1, $zero, -1
    *(uint32_t*)(s0) = v1;                                      // 0x001c935c: sw $v1, 0($s0)
label_0x1c9360:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c9364: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c9368: jr $ra
    sp = sp + 0x20;                                             // 0x001c936c: addiu $sp, $sp, 0x20
}