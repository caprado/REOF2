void func_001af6e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001af6e0: addiu $sp, $sp, -0x10
    func_001afb80();  // 0x1afb40                                // 0x001af6e8: jal 0x1afb40
    /* nop */                                                   // 0x001af6ec: nop 
    v1 = 3;                                                     // 0x001af6f0: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af740;                          // 0x001af6f4: beq $v0, $v1, 0x1af740
    v1 = 2;                                                     // 0x001af6f8: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af740;                          // 0x001af6fc: beq $v0, $v1, 0x1af740
    /* nop */                                                   // 0x001af700: nop 
    v1 = 1;                                                     // 0x001af704: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af730;                          // 0x001af708: beq $v0, $v1, 0x1af730
    /* nop */                                                   // 0x001af70c: nop 
    if (v0 == 0) goto label_0x1af720;                           // 0x001af710: beqz $v0, 0x1af720
    /* nop */                                                   // 0x001af714: nop 
    goto label_0x1af744;                                        // 0x001af718: b 0x1af744
    v0 = 1;                                                     // 0x001af71c: addiu $v0, $zero, 1
label_0x1af720:
    func_007d3780();  // 0x7d3780                               // 0x001af720: jal 0x7d3780
    /* nop */                                                   // 0x001af724: nop 
    goto label_0x1af748;                                        // 0x001af728: b 0x1af748
label_0x1af730:
    func_007d2f60();  // 0x7d2f60                               // 0x001af730: jal 0x7d2f60
    /* nop */                                                   // 0x001af734: nop 
    goto label_0x1af744;                                        // 0x001af738: b 0x1af744
    /* nop */                                                   // 0x001af73c: nop 
label_0x1af740:
    v0 = 1;                                                     // 0x001af740: addiu $v0, $zero, 1
label_0x1af744:
label_0x1af748:
    return;                                                     // 0x001af748: jr $ra
    sp = sp + 0x10;                                             // 0x001af74c: addiu $sp, $sp, 0x10
}