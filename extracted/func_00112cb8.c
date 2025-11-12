void func_00112cb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00112cb8: addiu $sp, $sp, -0x10
    v1 = 0x1000 << 16;                                          // 0x00112cbc: lui $v1, 0x1000
    v1 = v1 | 0xa000;                                           // 0x00112cc4: ori $v1, $v1, 0xa000
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00112ccc: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x00112cd0: andi $v0, $v0, 0x100
    if (v0 == 0) goto label_0x112d0c;                           // 0x00112cd4: beqz $v0, 0x112d0c
    v1 = 0x1000 << 16;                                          // 0x00112cdc: lui $v1, 0x1000
    a1 = 0x100 << 16;                                           // 0x00112ce0: lui $a1, 0x100
    v1 = v1 | 0xa000;                                           // 0x00112ce4: ori $v1, $v1, 0xa000
    /* nop */                                                   // 0x00112cec: nop 
label_0x112cf0:
    v0 = ((unsigned)a1 < (unsigned)v0) ? 1 : 0;                 // 0x00112cf0: sltu $v0, $a1, $v0
    if (v0 != 0) goto label_0x112d58;                           // 0x00112cf4: bnez $v0, 0x112d58
    a0 = a0 + 1;                                                // 0x00112cf8: addiu $a0, $a0, 1
    v0 = g_10000000;  // Global at 0x10000000                   // 0x00112cfc: lw $v0, 0($v1)
    v0 = v0 & 0x100;                                            // 0x00112d00: andi $v0, $v0, 0x100
    if (v0 != 0) goto label_0x112cf0;                           // 0x00112d04: bnez $v0, 0x112cf0
label_0x112d0c:
    v1 = 0x1000 << 16;                                          // 0x00112d10: lui $v1, 0x1000
    v1 = v1 | 0xa020;                                           // 0x00112d14: ori $v1, $v1, 0xa020
    a0 = 0x7000 << 16;                                          // 0x00112d18: lui $a0, 0x7000
    v0 = v0 & 0x7fff;                                           // 0x00112d1c: andi $v0, $v0, 0x7fff
    a1 = a2 & a0;                                               // 0x00112d20: and $a1, $a2, $a0
    v0 = v0 + 1;                                                // 0x00112d2c: addiu $v0, $v0, 1
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00112d30: sw $v0, 0($v1)
    if (a1 != a0) goto label_0x112d6c;                          // 0x00112d34: bne $a1, $a0, 0x112d6c
    v0 = 0xfff << 16;                                           // 0x00112d38: lui $v0, 0xfff
    v1 = 0x1000 << 16;                                          // 0x00112d3c: lui $v1, 0x1000
    v0 = v0 | 0xffff;                                           // 0x00112d40: ori $v0, $v0, 0xffff
    a0 = 0x8000 << 16;                                          // 0x00112d44: lui $a0, 0x8000
    v0 = a2 & v0;                                               // 0x00112d48: and $v0, $a2, $v0
    v1 = v1 | 0xa010;                                           // 0x00112d4c: ori $v1, $v1, 0xa010
    goto label_0x112d7c;                                        // 0x00112d50: b 0x112d7c
    v0 = v0 | a0;                                               // 0x00112d54: or $v0, $v0, $a0
label_0x112d58:
    a0 = 0x22 << 16;                                            // 0x00112d58: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00112d5c: jal 0x116508
    a0 = &str_00220e80;  // "sceGsSyncPath: DMA Ch.1 does not terminate\r\n" // 0x00112d60: addiu $a0, $a0, 0xe80
    goto label_0x112d94;                                        // 0x00112d64: b 0x112d94
    v0 = -1;                                                    // 0x00112d68: addiu $v0, $zero, -1
label_0x112d6c:
    v1 = 0x1000 << 16;                                          // 0x00112d6c: lui $v1, 0x1000
    v0 = v0 | 0xffff;                                           // 0x00112d70: ori $v0, $v0, 0xffff
    v1 = v1 | 0xa010;                                           // 0x00112d74: ori $v1, $v1, 0xa010
    v0 = a2 & v0;                                               // 0x00112d78: and $v0, $a2, $v0
label_0x112d7c:
    g_10000000 = v0;  // Global at 0x10000000                   // 0x00112d7c: sw $v0, 0($v1)
    v1 = 0x1000 << 16;                                          // 0x00112d80: lui $v1, 0x1000
    a0 = 0x101;                                                 // 0x00112d84: addiu $a0, $zero, 0x101
    v1 = v1 | 0xa000;                                           // 0x00112d88: ori $v1, $v1, 0xa000
    g_10000000 = a0;  // Global at 0x10000000                   // 0x00112d90: sw $a0, 0($v1)
label_0x112d94:
    return;                                                     // 0x00112d98: jr $ra
    sp = sp + 0x10;                                             // 0x00112d9c: addiu $sp, $sp, 0x10
}