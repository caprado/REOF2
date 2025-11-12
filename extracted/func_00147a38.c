void func_00147a38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00147a38: addiu $sp, $sp, -0x10
    v0 = 0xfff << 16;                                           // 0x00147a3c: lui $v0, 0xfff
    v0 = v0 | 0xffff;                                           // 0x00147a44: ori $v0, $v0, 0xffff
    a1 = a1 & v0;                                               // 0x00147a48: and $a1, $a1, $v0
    v1 = 0x2000 << 16;                                          // 0x00147a4c: lui $v1, 0x2000
    a3 = *(int32_t*)((a0) + 0x40);                              // 0x00147a50: lw $a3, 0x40($a0)
    a1 = a1 | v1;                                               // 0x00147a54: or $a1, $a1, $v1
    *(uint32_t*)((a3) + 0xfc) = a2;                             // 0x00147a58: sw $a2, 0xfc($a3)
    *(uint32_t*)((a3) + 0xf0) = a1;                             // 0x00147a5c: sw $a1, 0xf0($a3)
    *(uint32_t*)((a3) + 0xf4) = 0;                              // 0x00147a60: sw $zero, 0xf4($a3)
    *(uint32_t*)((a3) + 0xc8) = 0;                              // 0x00147a64: sw $zero, 0xc8($a3)
    func_00147fe8();  // 0x147e30                                // 0x00147a68: jal 0x147e30
    *(uint32_t*)((a3) + 0xf8) = 0;                              // 0x00147a6c: sw $zero, 0xf8($a3)
    return;                                                     // 0x00147a74: jr $ra
    sp = sp + 0x10;                                             // 0x00147a78: addiu $sp, $sp, 0x10
}