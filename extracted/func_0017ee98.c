void func_0017ee98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0017ee98: addiu $sp, $sp, -0x30
    func_0011d320();  // 11d320                                // 0x0017eeac: jal 0x11d320
    /* FPU: nori.b $w0, $w0, 6 */                               // 0x0017eeb4: nori.b $w0, $w0, 6
    if (v0 == 0) goto label_0x17eed4;                           // 0x0017eebc: beqz $v0, 0x17eed4
    return func_0011d390();  // Tail call                        // 0x0017eecc: j 0x11d378
    sp = sp + 0x30;                                             // 0x0017eed0: addiu $sp, $sp, 0x30
label_0x17eed4:
    return;                                                     // 0x0017eedc: jr $ra
    sp = sp + 0x30;                                             // 0x0017eee0: addiu $sp, $sp, 0x30
}