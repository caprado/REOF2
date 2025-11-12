void func_001bcad0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_18, local_1c, local_20, local_24, local_44, local_48, local_54;
    
    sp = sp + -0x60;                                            // 0x001bcad0: addiu $sp, $sp, -0x60
    v0 = 1;                                                     // 0x001bcad4: addiu $v0, $zero, 1
    a0 = sp + 0x40;                                             // 0x001bcadc: addiu $a0, $sp, 0x40
    local_44 = v0;                                              // 0x001bcae0: sw $v0, 0x44($sp)
    local_48 = 0;                                               // 0x001bcae4: sw $zero, 0x48($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001bcae8: jal 0x1142e0
    local_54 = 0;                                               // 0x001bcaec: sw $zero, 0x54($sp)
    ReferThreadStatus();  // 0x1141d0                           // 0x001bcaf0: jal 0x1141d0
    *(uint32_t*)((gp) + -0x7c4c) = v0;                          // 0x001bcaf4: sw $v0, -0x7c4c($gp)
    iChangeThreadPriority();  // 0x114170                       // 0x001bcafc: jal 0x114170
    a1 = 2;                                                     // 0x001bcb00: addiu $a1, $zero, 2
    v0 = 0x2000;                                                // 0x001bcb04: addiu $v0, $zero, 0x2000
    v1 = gp;                                                    // 0x001bcb08: addiu $v1, $gp, 0
    local_1c = v0;                                              // 0x001bcb0c: sw $v0, 0x1c($sp)
    a0 = sp + 0x10;                                             // 0x001bcb10: addiu $a0, $sp, 0x10
    v0 = 0x1c << 16;                                            // 0x001bcb14: lui $v0, 0x1c
    local_20 = v1;                                              // 0x001bcb18: sw $v1, 0x20($sp)
    v0 = v0 + -0x3490;                                          // 0x001bcb1c: addiu $v0, $v0, -0x3490
    v1 = 0x31 << 16;                                            // 0x001bcb20: lui $v1, 0x31
    local_14 = v0;                                              // 0x001bcb24: sw $v0, 0x14($sp)
    v1 = v1 + 0x3c00;                                           // 0x001bcb28: addiu $v1, $v1, 0x3c00
    v0 = 1;                                                     // 0x001bcb2c: addiu $v0, $zero, 1
    local_18 = v1;                                              // 0x001bcb30: sw $v1, 0x18($sp)
    DeleteThread();  // 0x1140e0                                // 0x001bcb34: jal 0x1140e0
    local_24 = v0;                                              // 0x001bcb38: sw $v0, 0x24($sp)
    *(uint32_t*)((gp) + -0x7c48) = v0;                          // 0x001bcb3c: sw $v0, -0x7c48($gp)
    a1 = *(int32_t*)((gp) + -0x7c4c);                           // 0x001bcb40: lw $a1, -0x7c4c($gp)
    ExitDeleteThread();  // 0x114100                            // 0x001bcb44: jal 0x114100
    a0 = *(int32_t*)((gp) + -0x7c48);                           // 0x001bcb48: lw $a0, -0x7c48($gp)
    a1 = *(int32_t*)((gp) + -0x7c4c);                           // 0x001bcb4c: lw $a1, -0x7c4c($gp)
    a0 = 0x1c << 16;                                            // 0x001bcb50: lui $a0, 0x1c
    func_00100788();  // 0x100708                                // 0x001bcb54: jal 0x100708
    a0 = a0 + -0x3310;                                          // 0x001bcb58: addiu $a0, $a0, -0x3310
    return;                                                     // 0x001bcb60: jr $ra
    sp = sp + 0x60;                                             // 0x001bcb64: addiu $sp, $sp, 0x60
}