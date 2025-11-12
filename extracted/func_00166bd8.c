void func_00166bd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x00166bd8: sll $v0, $a1, 3
    a2 = a2 << 4;                                               // 0x00166bdc: sll $a2, $a2, 4
    v0 = v0 - a1;                                               // 0x00166be0: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00166be4: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00166be8: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00166bec: sll $v0, $v0, 2
    a0 = a0 + v0;                                               // 0x00166bf0: addu $a0, $a0, $v0
    a0 = a0 + 0x1150;                                           // 0x00166bf4: addiu $a0, $a0, 0x1150
    a0 = a0 + a2;                                               // 0x00166bf8: addu $a0, $a0, $a2
    return;                                                     // 0x00166c18: jr $ra
}