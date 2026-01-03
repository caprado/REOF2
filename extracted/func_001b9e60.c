/** @category: game/menu @status: complete @author: caprado */
void func_001b9e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b9e60: addiu $sp, $sp, -0x20
    v1 = 1;                                                     // 0x001b9e64: addiu $v1, $zero, 1
    a0 = *(uint8_t*)((a0) + 8);                                 // 0x001b9e74: lbu $a0, 8($a0)
    if (a0 == v1) goto label_0x1b9eac;                          // 0x001b9e78: beq $a0, $v1, 0x1b9eac
    /* nop */                                                   // 0x001b9e7c: nop 
    if (a0 == 0) goto label_0x1b9e90;                           // 0x001b9e80: beqz $a0, 0x1b9e90
    /* nop */                                                   // 0x001b9e84: nop 
    goto label_0x1b9ee4;                                        // 0x001b9e88: b 0x1b9ee4
label_0x1b9e90:
    func_001b9f10();  // 0x1b9ef0                                // 0x001b9e90: jal 0x1b9ef0
    /* nop */                                                   // 0x001b9e94: nop 
    *(uint32_t*)((gp) + -0x638c) = 0;                           // 0x001b9e98: sw $zero, -0x638c($gp)
    *(uint32_t*)((gp) + -0x6390) = 0;                           // 0x001b9e9c: sw $zero, -0x6390($gp)
    v0 = *(uint8_t*)((s0) + 8);                                 // 0x001b9ea0: lbu $v0, 8($s0)
    v0 = v0 + 1;                                                // 0x001b9ea4: addiu $v0, $v0, 1
    *(uint8_t*)((s0) + 8) = v0;                                 // 0x001b9ea8: sb $v0, 8($s0)
label_0x1b9eac:
    func_001ba010();  // 0x1b9f10                                // 0x001b9eac: jal 0x1b9f10
    at = 0x30 << 16;                                            // 0x001b9eb4: lui $at, 0x30
    v1 = 1;                                                     // 0x001b9eb8: addiu $v1, $zero, 1
    a0 = g_00307f91;  // Global at 0x00307f91                   // 0x001b9ebc: lbu $a0, 0x7f91($at)
    if (a0 == v1) goto label_0x1b9ed8;                          // 0x001b9ec0: beq $a0, $v1, 0x1b9ed8
    /* nop */                                                   // 0x001b9ec4: nop 
    if (a0 == 0) goto label_0x1b9ee0;                           // 0x001b9ec8: beqz $a0, 0x1b9ee0
    /* nop */                                                   // 0x001b9ecc: nop 
    goto label_0x1b9ee0;                                        // 0x001b9ed0: b 0x1b9ee0
    /* nop */                                                   // 0x001b9ed4: nop 
label_0x1b9ed8:
    func_001ba1d0();  // 0x1ba0f0                                // 0x001b9ed8: jal 0x1ba0f0
label_0x1b9ee0:
label_0x1b9ee4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b9ee4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b9ee8: jr $ra
    sp = sp + 0x20;                                             // 0x001b9eec: addiu $sp, $sp, 0x20
}