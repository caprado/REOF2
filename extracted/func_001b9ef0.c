/** @category: game/menu @status: complete @author: caprado */
void func_001b9ef0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = 0x30 << 16;                                            // 0x001b9ef0: lui $a0, 0x30
    a0 = a0 + 0x7f90;                                           // 0x001b9ef8: addiu $a0, $a0, 0x7f90
    return func_00107d30();  // Tail call                        // 0x001b9efc: j 0x107c70
    a2 = 0x1c;                                                  // 0x001b9f00: addiu $a2, $zero, 0x1c
    /* nop */                                                   // 0x001b9f04: nop 
    /* nop */                                                   // 0x001b9f08: nop 
    /* nop */                                                   // 0x001b9f0c: nop 
    v1 = a0 << 1;                                               // 0x001b9f10: sll $v1, $a0, 1
    a1 = 0x2a << 16;                                            // 0x001b9f14: lui $a1, 0x2a
    a0 = v1 + a0;                                               // 0x001b9f18: addu $a0, $v1, $a0
    a2 = 0x30 << 16;                                            // 0x001b9f1c: lui $a2, 0x30
    a1 = a1 + 0xf20;                                            // 0x001b9f20: addiu $a1, $a1, 0xf20
    a0 = a0 << 3;                                               // 0x001b9f24: sll $a0, $a0, 3
    a0 = a1 + a0;                                               // 0x001b9f28: addu $a0, $a1, $a0
    v1 = 1;                                                     // 0x001b9f2c: addiu $v1, $zero, 1
    a0 = g_00307f90;  // Global at 0x00307f90                   // 0x001b9f30: lbu $a0, 0($a0)
    if (a0 == v1) goto label_0x1b9f54;                          // 0x001b9f34: beq $a0, $v1, 0x1b9f54
    a2 = a2 + 0x7f90;                                           // 0x001b9f38: addiu $a2, $a2, 0x7f90
    g_00307f90 = 0;  // Global at 0x00307f90                    // 0x001b9f3c: sb $zero, 0($a2)
    g_00307f9c = 0;  // Global at 0x00307f9c                    // 0x001b9f40: sh $zero, 0xc($a2)
    g_00307f9e = 0;  // Global at 0x00307f9e                    // 0x001b9f44: sh $zero, 0xe($a2)
    g_00307fa0 = 0;  // Global at 0x00307fa0                    // 0x001b9f48: sw $zero, 0x10($a2)
    goto label_0x1b9f58;                                        // 0x001b9f4c: b 0x1b9f58
    g_00307f91 = 0;  // Global at 0x00307f91                    // 0x001b9f50: sb $zero, 1($a2)
label_0x1b9f54:
    g_00307f90 = v1;  // Global at 0x00307f90                   // 0x001b9f54: sb $v1, 0($a2)
label_0x1b9f58:
    return;                                                     // 0x001b9f58: jr $ra
    /* nop */                                                   // 0x001b9f5c: nop 
}