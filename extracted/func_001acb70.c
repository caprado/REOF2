void func_001acb70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001acb70: addiu $sp, $sp, -0x40
    v0 = 0x8000 << 16;                                          // 0x001acb74: lui $v0, 0x8000
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001acb80: addu.qb $zero, $sp, $s1
    a1 = 1;                                                     // 0x001acb94: addiu $a1, $zero, 1
    func_001a7aa0();  // 0x1a7a60                                // 0x001acb98: jal 0x1a7a60
    a0 = v0 | 0xc;                                              // 0x001acb9c: ori $a0, $v0, 0xc
    func_001ace30();  // 0x1acc40                                // 0x001acba8: jal 0x1acc40
    if (v0 >= 0) goto label_0x1acbc0;                           // 0x001acbb0: bgez $v0, 0x1acbc0
    goto label_0x1acc24;                                        // 0x001acbb8: b 0x1acc24
label_0x1acbc0:
    func_001ab1d0();  // 0x1ab180                                // 0x001acbc0: jal 0x1ab180
    /* nop */                                                   // 0x001acbc4: nop 
    goto label_0x1acbdc;                                        // 0x001acbc8: b 0x1acbdc
    a0 = 1;                                                     // 0x001acbcc: addiu $a0, $zero, 1
label_0x1acbd0:
    func_00113130();  // 0x113098                                // 0x001acbd0: jal 0x113098
    a0 = 1;                                                     // 0x001acbd8: addiu $a0, $zero, 1
label_0x1acbdc:
    func_001a7970();  // 0x1a7910                                // 0x001acbdc: jal 0x1a7910
    /* nop */                                                   // 0x001acbe0: nop 
    if (v0 > 0) goto label_0x1acbd0;                            // 0x001acbe4: bgtz $v0, 0x1acbd0
    /* nop */                                                   // 0x001acbe8: nop 
    goto label_0x1acc00;                                        // 0x001acbec: b 0x1acc00
    v0 = 0x8000 << 16;                                          // 0x001acbf0: lui $v0, 0x8000
label_0x1acbf4:
    func_00113130();  // 0x113098                                // 0x001acbf4: jal 0x113098
    v0 = 0x8000 << 16;                                          // 0x001acbfc: lui $v0, 0x8000
label_0x1acc00:
    a1 = 1;                                                     // 0x001acc00: addiu $a1, $zero, 1
    func_001a7aa0();  // 0x1a7a60                                // 0x001acc04: jal 0x1a7a60
    a0 = v0 | 0xc;                                              // 0x001acc08: ori $a0, $v0, 0xc
    if (v0 > 0) goto label_0x1acbf4;                            // 0x001acc0c: bgtz $v0, 0x1acbf4
    /* nop */                                                   // 0x001acc10: nop 
    func_001ab230();  // 0x1ab1d0                                // 0x001acc14: jal 0x1ab1d0
    /* nop */                                                   // 0x001acc18: nop 
label_0x1acc24:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001acc24: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001acc28: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001acc2c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001acc30: jr $ra
    sp = sp + 0x40;                                             // 0x001acc34: addiu $sp, $sp, 0x40
}