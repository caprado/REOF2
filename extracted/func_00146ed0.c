void func_00146ed0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00146ed0: addiu $sp, $sp, -0x30
    func_0011d378();  // 0x11d320                                // 0x00146ee4: jal 0x11d320
    v1 = 0xfff << 16;                                           // 0x00146eec: lui $v1, 0xfff
    a1 = 0x1000 << 16;                                          // 0x00146ef0: lui $a1, 0x1000
    v1 = v1 | 0xffff;                                           // 0x00146ef4: ori $v1, $v1, 0xffff
    a2 = 0x8000 << 16;                                          // 0x00146ef8: lui $a2, 0x8000
    s0 = s0 & v1;                                               // 0x00146efc: and $s0, $s0, $v1
    a1 = a1 | 0xb010;                                           // 0x00146f00: ori $a1, $a1, 0xb010
    s0 = s0 | a2;                                               // 0x00146f04: or $s0, $s0, $a2
    a0 = 0x1000 << 16;                                          // 0x00146f08: lui $a0, 0x1000
    g_10000000 = s0;  // Global at 0x10000000                   // 0x00146f0c: sw $s0, 0($a1)
    a0 = a0 | 0xb020;                                           // 0x00146f10: ori $a0, $a0, 0xb020
    s1 = s1 >> 4;                                               // 0x00146f14: sra $s1, $s1, 4
    v1 = 0x1000 << 16;                                          // 0x00146f18: lui $v1, 0x1000
    g_10000000 = s1;  // Global at 0x10000000                   // 0x00146f1c: sw $s1, 0($a0)
    v1 = v1 | 0xb000;                                           // 0x00146f20: ori $v1, $v1, 0xb000
    a0 = 0x100;                                                 // 0x00146f24: addiu $a0, $zero, 0x100
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00146f28: sw $a0, 0($v1)
    if (v0 == 0) goto label_0x146f44;                           // 0x00146f2c: beqz $v0, 0x146f44
    return func_0011d390();  // Tail call                        // 0x00146f3c: j 0x11d378
    sp = sp + 0x30;                                             // 0x00146f40: addiu $sp, $sp, 0x30
label_0x146f44:
    return;                                                     // 0x00146f4c: jr $ra
    sp = sp + 0x30;                                             // 0x00146f50: addiu $sp, $sp, 0x30
}