void func_00148b58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x60;                                            // 0x00148b58: addiu $sp, $sp, -0x60
    v0 = 2;                                                     // 0x00148b5c: addiu $v0, $zero, 2
    a0 = *(int32_t*)((s1) + 0x870);                             // 0x00148b80: lw $a0, 0x870($s1)
    func_00147c28();  // 147c28                                // 0x00148b84: jal 0x147c28
    local_0 = v0;                                               // 0x00148b88: sw $v0, 0($sp)
    func_00144f18();  // 144f18                                // 0x00148b8c: jal 0x144f18
    v0 = 0x1000 << 16;                                          // 0x00148b94: lui $v0, 0x1000
    v0 = v0 | 0x2000;                                           // 0x00148b9c: ori $v0, $v0, 0x2000
    func_00144f18();  // 144f18                                // 0x00148ba0: jal 0x144f18
    g_10000000 = 0;  // Global at 0x10000000                    // 0x00148ba4: sw $zero, 0($v0)
    func_0011d320();  // 11d320                                // 0x00148ba8: jal 0x11d320
    /* nop */                                                   // 0x00148bac: nop 
    v1 = 0xfff << 16;                                           // 0x00148bb0: lui $v1, 0xfff
    a0 = 0x1000 << 16;                                          // 0x00148bb4: lui $a0, 0x1000
    v1 = v1 | 0xffff;                                           // 0x00148bb8: ori $v1, $v1, 0xffff
    a0 = a0 | 0xb410;                                           // 0x00148bbc: ori $a0, $a0, 0xb410
    s0 = s0 & v1;                                               // 0x00148bc0: and $s0, $s0, $v1
    a1 = 0x1000 << 16;                                          // 0x00148bc4: lui $a1, 0x1000
    g_10000000 = s0;  // Global at 0x10000000                   // 0x00148bc8: sw $s0, 0($a0)
    a1 = a1 | 0xb420;                                           // 0x00148bcc: ori $a1, $a1, 0xb420
    a0 = 4;                                                     // 0x00148bd0: addiu $a0, $zero, 4
    v1 = 0x1000 << 16;                                          // 0x00148bd4: lui $v1, 0x1000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00148bd8: sw $a0, 0($a1)
    v1 = v1 | 0xb400;                                           // 0x00148bdc: ori $v1, $v1, 0xb400
    a0 = 0x101;                                                 // 0x00148be0: addiu $a0, $zero, 0x101
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00148be4: sw $a0, 0($v1)
    /* beqzl $v0, 0x148bfc */                                   // 0x00148be8: beqzl $v0, 0x148bfc
    func_0011d378();  // 11d378                                // 0x00148bf0: jal 0x11d378
    /* nop */                                                   // 0x00148bf4: nop 
    func_00144ee8();  // 144ee8                                // 0x00148bfc: jal 0x144ee8
    func_00144f18();  // 144f18                                // 0x00148c04: jal 0x144f18
    a0 = *(int32_t*)((s1) + 0x870);                             // 0x00148c0c: lw $a0, 0x870($s1)
    v0 = 3;                                                     // 0x00148c10: addiu $v0, $zero, 3
    local_0 = v0;                                               // 0x00148c14: sw $v0, 0($sp)
    func_00147c28();  // 147c28                                // 0x00148c18: jal 0x147c28
    return;                                                     // 0x00148c30: jr $ra
    sp = sp + 0x60;                                             // 0x00148c34: addiu $sp, $sp, 0x60
}