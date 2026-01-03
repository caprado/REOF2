void func_00175170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175170: addiu $sp, $sp, -0x20
    func_001751c0();  // 1751c0                                // 0x0017518c: jal 0x1751c0
    if (v0 == 0) goto label_0x1751a4;                           // 0x00175194: beqz $v0, 0x1751a4
    s0 = s0 << 2;                                               // 0x00175198: sll $s0, $s0, 2
    v0 = s0 + s2;                                               // 0x0017519c: addu $v0, $s0, $s2
    *(uint32_t*)((v0) + 0xb30) = s1;                            // 0x001751a0: sw $s1, 0xb30($v0)
label_0x1751a4:
    return;                                                     // 0x001751b4: jr $ra
    sp = sp + 0x20;                                             // 0x001751b8: addiu $sp, $sp, 0x20
}