void func_00166c20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x00166c20: sll $v0, $a1, 3
    a2 = a2 << 4;                                               // 0x00166c24: sll $a2, $a2, 4
    v0 = v0 - a1;                                               // 0x00166c28: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00166c2c: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00166c30: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00166c34: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x00166c38: addu $a0, $a0, $v0
    a0 = a0 + 0x1150;                                           // 0x00166c3c: addiu $a0, $a0, 0x1150
    a0 = a0 + a2;                                               // 0x00166c40: addu $a0, $a0, $a2
    return;                                                     // 0x00166c60: jr $ra
}