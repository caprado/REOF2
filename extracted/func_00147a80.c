void func_00147a80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00147a80: addiu $sp, $sp, -0x10
    v0 = 0xfff << 16;                                           // 0x00147a84: lui $v0, 0xfff
    v0 = v0 | 0xffff;                                           // 0x00147a90: ori $v0, $v0, 0xffff
    a2 = a2 << 4;                                               // 0x00147a94: sll $a2, $a2, 4
    a1 = a1 & v0;                                               // 0x00147a98: and $a1, $a1, $v0
    v1 = *(int32_t*)((a0) + 0x40);                              // 0x00147a9c: lw $v1, 0x40($a0)
    v0 = 0x2000 << 16;                                          // 0x00147aa0: lui $v0, 0x2000
    a3 = a3 << 4;                                               // 0x00147aa4: sll $a3, $a3, 4
    a1 = a1 | v0;                                               // 0x00147aa8: or $a1, $a1, $v0
    *(uint32_t*)((v1) + 0xf8) = a3;                             // 0x00147aac: sw $a3, 0xf8($v1)
    *(uint32_t*)((v1) + 0xf0) = a1;                             // 0x00147ab0: sw $a1, 0xf0($v1)
    *(uint32_t*)((v1) + 0xfc) = t0;                             // 0x00147ab4: sw $t0, 0xfc($v1)
    *(uint32_t*)((v1) + 0xf4) = a2;                             // 0x00147ab8: sw $a2, 0xf4($v1)
    func_00147e30();  // 147e30                                // 0x00147abc: jal 0x147e30
    *(uint32_t*)((v1) + 0xc8) = 0;                              // 0x00147ac0: sw $zero, 0xc8($v1)
    return;                                                     // 0x00147ac8: jr $ra
    sp = sp + 0x10;                                             // 0x00147acc: addiu $sp, $sp, 0x10
}