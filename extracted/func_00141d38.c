void func_00141d38() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x21 << 16;                                            // 0x00141d38: lui $a0, 0x21
    sp = sp + -0x10;                                            // 0x00141d3c: addiu $sp, $sp, -0x10
    a0 = a0 + 0xc18;                                            // 0x00141d44: addiu $a0, $a0, 0xc18
    func_00107d30();  // 0x107c70                                // 0x00141d4c: jal 0x107c70
    a2 = 0x20;                                                  // 0x00141d50: addiu $a2, $zero, 0x20
    a0 = 0x25 << 16;                                            // 0x00141d54: lui $a0, 0x25
    a0 = a0 + 0x6160;                                           // 0x00141d58: addiu $a0, $a0, 0x6160
    func_00107d30();  // 0x107c70                                // 0x00141d60: jal 0x107c70
    a2 = 8;                                                     // 0x00141d64: addiu $a2, $zero, 8
    a0 = 0x25 << 16;                                            // 0x00141d68: lui $a0, 0x25
    a0 = a0 + 0x6168;                                           // 0x00141d6c: addiu $a0, $a0, 0x6168
    func_00107d30();  // 0x107c70                                // 0x00141d74: jal 0x107c70
    a2 = 8;                                                     // 0x00141d78: addiu $a2, $zero, 8
    v1 = 0x21 << 16;                                            // 0x00141d7c: lui $v1, 0x21
    v1 = v1 + 0xbf8;                                            // 0x00141d80: addiu $v1, $v1, 0xbf8
    v0 = 5;                                                     // 0x00141d84: addiu $v0, $zero, 5
label_0x141d88:
    v0 = v0 + -1;                                               // 0x00141d88: addiu $v0, $v0, -1
    g_00210bf8 = 0;  // Global at 0x00210bf8                    // 0x00141d8c: sw $zero, 0($v1)
    /* nop */                                                   // 0x00141d90: nop 
    /* nop */                                                   // 0x00141d94: nop 
    /* nop */                                                   // 0x00141d98: nop 
    if (v0 >= 0) goto label_0x141d88;                           // 0x00141d9c: bgez $v0, 0x141d88
    v1 = v1 + 4;                                                // 0x00141da0: addiu $v1, $v1, 4
    v0 = 0x25 << 16;                                            // 0x00141da8: lui $v0, 0x25
    g_00256178 = 0;  // Global at 0x00256178                    // 0x00141dac: sw $zero, 0x6178($v0)
    return;                                                     // 0x00141db0: jr $ra
    sp = sp + 0x10;                                             // 0x00141db4: addiu $sp, $sp, 0x10
}