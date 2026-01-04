/** @category: utility/memory @status: complete @author: caprado */
// This is a memset implementation - replace with standard memset()
void func_00107c70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x00107c70: sltiu $v0, $a2, 8
    if (v0 != 0) goto label_0x107cf0;                           // 0x00107c74: bnez $v0, 0x107cf0
    v0 = a0 & 0xf;                                              // 0x00107c7c: andi $v0, $a0, 0xf
    if (v0 != 0) goto label_0x107cf0;                           // 0x00107c80: bnez $v0, 0x107cf0
    t1 = a1 & 0xff;                                             // 0x00107c88: andi $t1, $a1, 0xff
    t2 = ((unsigned)a2 < (unsigned)0x20) ? 1 : 0;               // 0x00107c8c: sltiu $t2, $a2, 0x20
    t0 = v1 | t1;                                               // 0x00107c98: or $t0, $v1, $t1
    if (t2 != 0) goto label_0x107cdc;                           // 0x00107ca0: bnez $t2, 0x107cdc
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x00107ca4: sltiu $v0, $a2, 8
label_0x107cac:
    a2 = a2 + -0x20;                                            // 0x00107cb0: addiu $a2, $a2, -0x20
    a3 = a3 + 0x10;                                             // 0x00107cb4: addiu $a3, $a3, 0x10
    v0 = ((unsigned)a2 < (unsigned)0x20) ? 1 : 0;               // 0x00107cb8: sltiu $v0, $a2, 0x20
    if (v0 == 0) goto label_0x107cac;                           // 0x00107cc0: beqz $v0, 0x107cac
    a3 = a3 + 0x10;                                             // 0x00107cc4: addiu $a3, $a3, 0x10
    goto label_0x107cdc;                                        // 0x00107cc8: b 0x107cdc
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x00107ccc: sltiu $v0, $a2, 8
    a2 = a2 + -8;                                               // 0x00107cd0: addiu $a2, $a2, -8
    a3 = a3 + 8;                                                // 0x00107cd4: addiu $a3, $a3, 8
    v0 = ((unsigned)a2 < (unsigned)8) ? 1 : 0;                  // 0x00107cd8: sltiu $v0, $a2, 8
label_0x107cdc:
    /* nop */                                                   // 0x00107cdc: nop 
    /* nop */                                                   // 0x00107ce0: nop 
    /* beqzl $v0, 0x107cd0 */                                   // 0x00107ce4: beqzl $v0, 0x107cd0
label_0x107cf0:
    v0 = 0xffff << 16;                                          // 0x00107cf0: lui $v0, 0xffff
    a2 = a2 + -1;                                               // 0x00107cf4: addiu $a2, $a2, -1
    v0 = v0 | 0xffff;                                           // 0x00107cf8: ori $v0, $v0, 0xffff
    if (a2 == v0) goto label_0x107d28;                          // 0x00107cfc: beq $a2, $v0, 0x107d28
    /* nop */                                                   // 0x00107d00: nop 
    v0 = 0xffff << 16;                                          // 0x00107d04: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00107d08: ori $v0, $v0, 0xffff
label_0x107d0c:
    *(uint8_t*)(v1) = a1;                                       // 0x00107d0c: sb $a1, 0($v1)
    a2 = a2 + -1;                                               // 0x00107d10: addiu $a2, $a2, -1
    v1 = v1 + 1;                                                // 0x00107d14: addiu $v1, $v1, 1
    /* nop */                                                   // 0x00107d18: nop 
    /* nop */                                                   // 0x00107d1c: nop 
    if (a2 != v0) goto label_0x107d0c;                          // 0x00107d20: bne $a2, $v0, 0x107d0c
    /* nop */                                                   // 0x00107d24: nop 
label_0x107d28:
    return;                                                     // 0x00107d28: jr $ra
}