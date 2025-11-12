void func_001af800() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001af800: addiu $sp, $sp, -0x20
    func_001afb80();  // 0x1afb40                                // 0x001af80c: jal 0x1afb40
    v1 = 3;                                                     // 0x001af814: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af864;                          // 0x001af818: beq $v0, $v1, 0x1af864
    v1 = 2;                                                     // 0x001af81c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af864;                          // 0x001af820: beq $v0, $v1, 0x1af864
    /* nop */                                                   // 0x001af824: nop 
    v1 = 1;                                                     // 0x001af828: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af858;                          // 0x001af82c: beq $v0, $v1, 0x1af858
    if (v0 == 0) goto label_0x1af844;                           // 0x001af834: beqz $v0, 0x1af844
    goto label_0x1af868;                                        // 0x001af83c: b 0x1af868
label_0x1af844:
    func_007d3980();  // 0x7d3980                               // 0x001af848: jal 0x7d3980
    goto label_0x1af864;                                        // 0x001af850: b 0x1af864
    /* nop */                                                   // 0x001af854: nop 
label_0x1af858:
    func_007d3170();  // 0x7d3170                               // 0x001af85c: jal 0x7d3170
label_0x1af864:
label_0x1af868:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af868: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af86c: jr $ra
    sp = sp + 0x20;                                             // 0x001af870: addiu $sp, $sp, 0x20
}