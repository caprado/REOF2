void func_00129a08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00129a08: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x129a28;                           // 0x00129a0c: bnez $a0, 0x129a28
    a0 = 0x22 << 16;                                            // 0x00129a14: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00129a18: jal 0x127d90
    a0 = &str_00222a90;  // "E9040828:'ptid' is range outside." // 0x00129a1c: addiu $a0, $a0, 0x2a90
    goto label_0x129a2c;                                        // 0x00129a20: b 0x129a2c
    v0 = -3;                                                    // 0x00129a24: addiu $v0, $zero, -3
label_0x129a28:
    v0 = g_00222a91;  // Global at 0x00222a91                   // 0x00129a28: lb $v0, 1($a0)
label_0x129a2c:
    return;                                                     // 0x00129a30: jr $ra
    sp = sp + 0x10;                                             // 0x00129a34: addiu $sp, $sp, 0x10
}