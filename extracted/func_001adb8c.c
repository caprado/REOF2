void func_001adb8c() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001adb8c: addiu $sp, $sp, -0x10
    a1 = v0 << 3;                                               // 0x001adb90: sll $a1, $v0, 3
    v1 = v1 + -0x57e0;                                          // 0x001adb94: addiu $v1, $v1, -0x57e0
    v0 = 0x2b << 16;                                            // 0x001adb98: lui $v0, 0x2b
    v0 = v0 + -0x57dd;                                          // 0x001adba0: addiu $v0, $v0, -0x57dd
    v1 = v1 + a1;                                               // 0x001adba4: addu $v1, $v1, $a1
    *(uint8_t*)(v1) = 0;                                        // 0x001adba8: sb $zero, 0($v1)
    v0 = v0 + a1;                                               // 0x001adbac: addu $v0, $v0, $a1
    g_002aa823 = 0;  // Global at 0x002aa823                    // 0x001adbb0: sb $zero, 0($v0)
    v1 = a0 << 2;                                               // 0x001adbb4: sll $v1, $a0, 2
    v0 = 0x2b << 16;                                            // 0x001adbb8: lui $v0, 0x2b
    v0 = v0 + -0x5788;                                          // 0x001adbbc: addiu $v0, $v0, -0x5788
    v0 = v0 + v1;                                               // 0x001adbc0: addu $v0, $v0, $v1
    func_00131bb8();  // 0x131af8                                // 0x001adbc4: jal 0x131af8
    a0 = g_002aa878;  // Global at 0x002aa878                   // 0x001adbc8: lw $a0, 0($v0)
    return;                                                     // 0x001adbd4: jr $ra
    sp = sp + 0x10;                                             // 0x001adbd8: addiu $sp, $sp, 0x10
}