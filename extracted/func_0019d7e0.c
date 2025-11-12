void func_0019d7e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = 1;                                                     // 0x0019d7e4: addiu $a1, $zero, 1
    v1 = v0 << a1;                                              // 0x0019d7f0: sllv $v1, $v0, $a1
label_0x19d7f4:
    v1 = (v1 < a0) ? 1 : 0;                                     // 0x0019d7f4: slt $v1, $v1, $a0
    if (v1 != 0) goto label_0x19d80c;                           // 0x0019d7f8: bnez $v1, 0x19d80c
    /* nop */                                                   // 0x0019d7fc: nop 
    goto label_0x19d81c;                                        // 0x0019d804: b 0x19d81c
label_0x19d80c:
    a1 = a1 + 1;                                                // 0x0019d80c: addiu $a1, $a1, 1
    at = (a1 < 0xb) ? 1 : 0;                                    // 0x0019d810: slti $at, $a1, 0xb
    if (at != 0) goto label_0x19d7f4;                           // 0x0019d814: bnez $at, 0x19d7f4
    v1 = v0 << a1;                                              // 0x0019d818: sllv $v1, $v0, $a1
label_0x19d81c:
    return;                                                     // 0x0019d81c: jr $ra
    /* nop */                                                   // 0x0019d820: nop 
}