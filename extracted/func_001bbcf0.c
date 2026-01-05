/** @category graphics/compositor @status complete @author caprado */
void func_001bbcf0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_22, local_24, local_26, local_28;
    
    sp = sp + -0x30;                                            // 0x001bbcf0: addiu $sp, $sp, -0x30
    a0 = 0x58;                                                  // 0x001bbcf4: addiu $a0, $zero, 0x58
    s0 = 0x30 << 16;                                            // 0x001bbd00: lui $s0, 0x30
    func_001b7a70();  // 1b7a70                                // 0x001bbd04: jal 0x1b7a70
    s0 = s0 + 0x7fc0;                                           // 0x001bbd08: addiu $s0, $s0, 0x7fc0
    if (v0 != 0) goto label_0x1bbd5c;                           // 0x001bbd0c: bnez $v0, 0x1bbd5c
    /* nop */                                                   // 0x001bbd10: nop 
    v1 = g_00307fc0;  // Global at 0x00307fc0                   // 0x001bbd14: lbu $v1, 0($s0)
    if (v1 == 0) goto label_0x1bbd5c;                           // 0x001bbd18: beqz $v1, 0x1bbd5c
    /* nop */                                                   // 0x001bbd1c: nop 
    v0 = 0x280;                                                 // 0x001bbd20: addiu $v0, $zero, 0x280
    local_20 = 0;                                               // 0x001bbd24: sh $zero, 0x20($sp)
    local_24 = v0;                                              // 0x001bbd28: sh $v0, 0x24($sp)
    a0 = sp + 0x20;                                             // 0x001bbd2c: addiu $a0, $sp, 0x20
    v0 = 0x1c0;                                                 // 0x001bbd30: addiu $v0, $zero, 0x1c0
    local_22 = 0;                                               // 0x001bbd34: sh $zero, 0x22($sp)
    local_26 = v0;                                              // 0x001bbd38: sh $v0, 0x26($sp)
    v1 = g_00307fcc;  // Global at 0x00307fcc                   // 0x001bbd3c: lw $v1, 0xc($s0)
    v0 = g_00307fd0;  // Global at 0x00307fd0                   // 0x001bbd40: lbu $v0, 0x10($s0)
    v0 = v0 << 0x18;                                            // 0x001bbd4c: sll $v0, $v0, 0x18
    v0 = v1 | v0;                                               // 0x001bbd50: or $v0, $v1, $v0
    func_001ab530();  // 1ab530                                // 0x001bbd54: jal 0x1ab530
    local_28 = v0;                                              // 0x001bbd58: sw $v0, 0x28($sp)
label_0x1bbd5c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bbd60: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bbd64: jr $ra
    sp = sp + 0x30;                                             // 0x001bbd68: addiu $sp, $sp, 0x30
}