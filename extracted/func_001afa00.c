void func_001afa00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001afa00: addiu $sp, $sp, -0x20
    func_001afb80();  // 0x1afb40                                // 0x001afa0c: jal 0x1afb40
    v1 = 3;                                                     // 0x001afa14: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1afa64;                          // 0x001afa18: beq $v0, $v1, 0x1afa64
    v1 = 2;                                                     // 0x001afa1c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1afa64;                          // 0x001afa20: beq $v0, $v1, 0x1afa64
    /* nop */                                                   // 0x001afa24: nop 
    v1 = 1;                                                     // 0x001afa28: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1afa54;                          // 0x001afa2c: beq $v0, $v1, 0x1afa54
    if (v0 == 0) goto label_0x1afa44;                           // 0x001afa34: beqz $v0, 0x1afa44
    goto label_0x1afa68;                                        // 0x001afa3c: b 0x1afa68
    v0 = 1;                                                     // 0x001afa40: addiu $v0, $zero, 1
label_0x1afa44:
    func_007d3ca0();  // 0x7d3ca0                               // 0x001afa44: jal 0x7d3ca0
    /* nop */                                                   // 0x001afa48: nop 
    goto label_0x1afa6c;                                        // 0x001afa4c: b 0x1afa6c
label_0x1afa54:
    func_007d3560();  // 0x7d3560                               // 0x001afa54: jal 0x7d3560
    /* nop */                                                   // 0x001afa58: nop 
    goto label_0x1afa68;                                        // 0x001afa5c: b 0x1afa68
    /* nop */                                                   // 0x001afa60: nop 
label_0x1afa64:
    v0 = 1;                                                     // 0x001afa64: addiu $v0, $zero, 1
label_0x1afa68:
label_0x1afa6c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001afa6c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001afa70: jr $ra
    sp = sp + 0x20;                                             // 0x001afa74: addiu $sp, $sp, 0x20
}